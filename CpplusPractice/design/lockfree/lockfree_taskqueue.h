/**
 * task_queue
 * 
 * A C++ Version of lock-free ring buffer (SPSC only)
 * Atomic implementation
 * Extremely simple to use
 * (However, you need to manage your custom objects on your own.)
 * 
 * - Single Constructor (rule of zero)
 * - void enqueue(TYPE)
 * - TYPE dequeue()
 * - that's all!
 *
 * "Code in C++"
 */

#ifndef CIIS_LOCKFREE_TASK_QUEUE_H
#define CIIS_LOCKFREE_TASK_QUEUE_H

#include <atomic>
#include <cstdint>
#include <thread>

template<class TYPE>
class task_queue {
private:
    std::atomic<uint32_t>   in  {0};
    std::atomic<uint32_t>   out {0};
    uint32_t                cap;
    TYPE*                   ringbuf;

/* reduce capacity down to 2^N */
    static inline uint32_t
    fit(uint32_t c)
    {
        c |= c >> 1;
        c |= c >> 2;
        c |= c >> 4;
        c |= c >> 8;
        c |= c >> 16;
        c++;

        return c;
    }

/* index mask */
    static inline uint32_t
    index(uint32_t i, uint32_t c) 
    {
        return i & (c - 1);
    }

/* if full, pause enqueue */
    static inline bool
    full(uint32_t i, uint32_t o, uint32_t c) 
    {
        return i - o == c;
    }

/* if empty, pause dequeue  */
    static inline bool
    empty(uint32_t i, uint32_t o) 
    {
        return i == o;
    }

/* request permission for enqueue */
    inline void
    req_enq()
    {
        while (full(
            in.load(std::memory_order_relaxed), 
            out.load(std::memory_order_relaxed), 
            cap))
        {
            std::this_thread::yield();
        }
    }

/* request permission for dequeue */
    inline void
    req_deq()
    {
        while (empty(
            in.load(std::memory_order_relaxed), 
            out.load(std::memory_order_relaxed)))
        {
            std::this_thread::yield();
        }
    }

public:
/* dtor */
    ~task_queue()
    {
        delete[] ringbuf;
        ringbuf = nullptr;

        cap = 0;
    }

/* ctorA */
    task_queue(uint32_t capacity)
        : cap(fit(capacity))
    {
        ringbuf = new TYPE[cap];
    }

/* enqueue, push, or write (copy assignment) */
    void
    enqueue(TYPE input)
    {
        req_enq();

        uint32_t IN     = in.load(std::memory_order_relaxed);
        uint32_t OUT    = out.load(std::memory_order_acquire);

        ringbuf[index(IN, cap)] = input;

        in.store(IN+1, std::memory_order_release);
    }

    TYPE
    dequeue()
    {
        req_deq();

        uint32_t IN     = in.load(std::memory_order_acquire);
        uint32_t OUT    = out.load(std::memory_order_relaxed);

        TYPE output = ringbuf[index(OUT, cap)];

        out.store(OUT+1, std::memory_order_release);

        return output;
    }
};

#endif //CIIS_LOCKFREE_TASK_QUEUE_H