### Vector::resize, reserve, shrink, clear

I tell only conclusion, and the explanation should lie in testing __log-files under `vector_test` directory__.

#### resize(N) : N * construction
```
size = N

do reserve(N)
```
#### reserve(N) : N * allocation
```
capacity = N

once size = N

capacity *= 2
```
#### shrink_to_fit() : (capacity - size) * deallocation
```
after operation, capacity = size
```

#### clear() : (size) * destruction
```
only destruction but no deallocation happens
```

### Relationship
```
[First] capacity <> alloc/free <> reserve[+] / shrink[-]
[Last]  size     <> ctor /dtor <> resize[+]  / clear[-]
```
> NOTE: [Priority] (de)allocation > (con/de)struction