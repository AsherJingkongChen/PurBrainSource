```assembly
ubprintf.o:	file format Mach-O 64-bit x86-64


Disassembly of section __TEXT,__text:

0000000000000000 _f:
; /Users/yilan/desktop/cphw/ubprintf.c:4
; {
       0: 55                           	pushq	%rbp
       1: 48 89 e5                     	movq	%rsp, %rbp
; /Users/yilan/desktop/cphw/ubprintf.c:6
;     i++;
       4: 8b 05 00 00 00 00            	movl	(%rip), %eax
       a: 83 c0 01                     	addl	$1, %eax
       d: 89 05 00 00 00 00            	movl	%eax, (%rip)
; /Users/yilan/desktop/cphw/ubprintf.c:7
;     return &i;
      13: 48 8d 05 00 00 00 00         	leaq	(%rip), %rax
; /Users/yilan/desktop/cphw/ubprintf.c:8
; }
      1a: 5d                           	popq	%rbp
      1b: c3                           	retq

000000000000001c _main:
; /Users/yilan/desktop/cphw/ubprintf.c:11
; {
      1c: 55                           	pushq	%rbp
      1d: 48 89 e5                     	movq	%rsp, %rbp
      20: 41 56                        	pushq	%r14
      22: 41 55                        	pushq	%r13
      24: 41 54                        	pushq	%r12
      26: 53                           	pushq	%rbx
; /Users/yilan/desktop/cphw/ubprintf.c:12
;     printf("%d %d %d %d %d", *f(), *f(), *f(), *f(), *f());
      27: b8 00 00 00 00               	movl	$0, %eax
      2c: e8 00 00 00 00               	callq	0 <_main+0x15>
      31: 44 8b 30                     	movl	(%rax), %r14d
      34: b8 00 00 00 00               	movl	$0, %eax
      39: e8 00 00 00 00               	callq	0 <_main+0x22>
      3e: 44 8b 28                     	movl	(%rax), %r13d
      41: b8 00 00 00 00               	movl	$0, %eax
      46: e8 00 00 00 00               	callq	0 <_main+0x2f>
      4b: 44 8b 20                     	movl	(%rax), %r12d
      4e: b8 00 00 00 00               	movl	$0, %eax
      53: e8 00 00 00 00               	callq	0 <_main+0x3c>
      58: 8b 18                        	movl	(%rax), %ebx
      5a: b8 00 00 00 00               	movl	$0, %eax
      5f: e8 00 00 00 00               	callq	0 <_main+0x48>
      64: 8b 00                        	movl	(%rax), %eax
      66: 45 89 f1                     	movl	%r14d, %r9d
      69: 45 89 e8                     	movl	%r13d, %r8d
      6c: 44 89 e1                     	movl	%r12d, %ecx
      6f: 89 da                        	movl	%ebx, %edx
      71: 89 c6                        	movl	%eax, %esi
      73: 48 8d 05 00 00 00 00         	leaq	(%rip), %rax
      7a: 48 89 c7                     	movq	%rax, %rdi
      7d: b8 00 00 00 00               	movl	$0, %eax
      82: e8 00 00 00 00               	callq	0 <_main+0x6b>
; /Users/yilan/desktop/cphw/ubprintf.c:13
;     return 0;
      87: b8 00 00 00 00               	movl	$0, %eax
; /Users/yilan/desktop/cphw/ubprintf.c:14
; }
      8c: 5b                           	popq	%rbx
      8d: 41 5c                        	popq	%r12
      8f: 41 5d                        	popq	%r13
      91: 41 5e                        	popq	%r14
      93: 5d                           	popq	%rbp
      94: c3                           	retq

Disassembly of section __TEXT,__cstring:

0000000000000095 lC0:
      95: 25 64 20 25 64               	andl	$1680154724, %eax
      9a: 20 25 64 20 25 64            	andb	%ah, 1680154724(%rip)
      a0: 20 25                        	<unknown>
      a2: 64 00                        	<unknown>

Disassembly of section __DATA,__bss:

00000000000006f8 _i.0:
...

Disassembly of section __DWARF,__debug_frame:

00000000000000a8 __debug_frame:
      a8: 14 00                        	adcb	$0, %al
      aa: 00 00                        	addb	%al, (%rax)
      ac: ff ff                        	<unknown>
      ae: ff ff                        	<unknown>
      b0: 01 00                        	addl	%eax, (%rax)
      b2: 01 78 10                     	addl	%edi, 16(%rax)
      b5: 0c 07                        	orb	$7, %al
      b7: 08 90 01 00 00 00            	orb	%dl, 1(%rax)
      bd: 00 00                        	addb	%al, (%rax)
      bf: 00 2c 00                     	addb	%ch, (%rax,%rax)
		...
      ce: 00 00                        	addb	%al, (%rax)
      d0: 1c 00                        	sbbb	$0, %al
      d2: 00 00                        	addb	%al, (%rax)
      d4: 00 00                        	addb	%al, (%rax)
      d6: 00 00                        	addb	%al, (%rax)
      d8: 04 01                        	addb	$1, %al
      da: 00 00                        	addb	%al, (%rax)
      dc: 00 0e                        	addb	%cl, (%rsi)
      de: 10 86 02 04 03 00            	adcb	%al, 197634(%rsi)
      e4: 00 00                        	addb	%al, (%rax)
      e6: 0d 06 04 17 00               	orl	$1508358, %eax
      eb: 00 00                        	addb	%al, (%rax)
      ed: 0c 07                        	orb	$7, %al
      ef: 08 3c 00                     	orb	%bh, (%rax,%rax)
      f2: 00 00                        	addb	%al, (%rax)
      f4: 00 00                        	addb	%al, (%rax)
      f6: 00 00                        	addb	%al, (%rax)
      f8: 1c 00                        	sbbb	$0, %al
      fa: 00 00                        	addb	%al, (%rax)
      fc: 00 00                        	addb	%al, (%rax)
      fe: 00 00                        	addb	%al, (%rax)
     100: 79 00                        	jns	0 <__debug_frame+0x5a>
     102: 00 00                        	addb	%al, (%rax)
     104: 00 00                        	addb	%al, (%rax)
     106: 00 00                        	addb	%al, (%rax)
     108: 04 01                        	addb	$1, %al
     10a: 00 00                        	addb	%al, (%rax)
     10c: 00 0e                        	addb	%cl, (%rsi)
     10e: 10 86 02 04 03 00            	adcb	%al, 197634(%rsi)
     114: 00 00                        	addb	%al, (%rax)
     116: 0d 06 04 07 00               	orl	$459782, %eax
     11b: 00 00                        	addb	%al, (%rax)
     11d: 8e 03                        	movw	(%rbx), %es
     11f: 8d 04 8c                     	leal	(%rsp,%rcx,4), %eax
     122: 05 83 06 04 6d               	addl	$1828980355, %eax
     127: 00 00                        	addb	%al, (%rax)
     129: 00 0c 07                     	addb	%cl, (%rdi,%rax)
     12c: 08 00                        	orb	%al, (%rax)
     12e: 00 00                        	addb	%al, (%rax)

Disassembly of section __TEXT,__eh_frame:

0000000000000130 EH_frame1:
     130: 14 00                        	adcb	$0, %al
     132: 00 00                        	addb	%al, (%rax)
     134: 00 00                        	addb	%al, (%rax)
     136: 00 00                        	addb	%al, (%rax)
     138: 01 7a 52                     	addl	%edi, 82(%rdx)
     13b: 00 01                        	addb	%al, (%rcx)
     13d: 78 10                        	js	16 <EH_frame1+0x1f>
     13f: 01 10                        	addl	%edx, (%rax)
     141: 0c 07                        	orb	$7, %al
     143: 08 90 01 00 00 34            	orb	%dl, 872415233(%rax)
     149: 00 00                        	addb	%al, (%rax)
     14b: 00 1c 00                     	addb	%bl, (%rax,%rax)
     14e: 00 00                        	addb	%al, (%rax)
     150: e0 ff                        	loopne	-1
     152: ff ff                        	<unknown>
     154: ff ff                        	<unknown>
     156: ff ff                        	<unknown>
     158: 1c 00                        	sbbb	$0, %al
     15a: 00 00                        	addb	%al, (%rax)
     15c: 00 00                        	addb	%al, (%rax)
     15e: 00 00                        	addb	%al, (%rax)
     160: 00 04 01                     	addb	%al, (%rcx,%rax)
     163: 00 00                        	addb	%al, (%rax)
     165: 00 0e                        	addb	%cl, (%rsi)
     167: 10 86 02 04 03 00            	adcb	%al, 197634(%rsi)
     16d: 00 00                        	addb	%al, (%rax)
     16f: 0d 06 04 17 00               	orl	$1508358, %eax
     174: 00 00                        	addb	%al, (%rax)
     176: 0c 07                        	orb	$7, %al
     178: 08 00                        	orb	%al, (%rax)
     17a: 00 00                        	addb	%al, (%rax)
     17c: 00 00                        	addb	%al, (%rax)
     17e: 00 00                        	addb	%al, (%rax)
     180: 3c 00                        	cmpb	$0, %al
     182: 00 00                        	addb	%al, (%rax)
     184: 54                           	pushq	%rsp
     185: 00 00                        	addb	%al, (%rax)
     187: 00 a8 ff ff ff ff            	addb	%ch, -1(%rax)
     18d: ff ff                        	<unknown>
     18f: ff 79 00                     	<unknown>
     192: 00 00                        	addb	%al, (%rax)
     194: 00 00                        	addb	%al, (%rax)
     196: 00 00                        	addb	%al, (%rax)
     198: 00 04 01                     	addb	%al, (%rcx,%rax)
     19b: 00 00                        	addb	%al, (%rax)
     19d: 00 0e                        	addb	%cl, (%rsi)
     19f: 10 86 02 04 03 00            	adcb	%al, 197634(%rsi)
     1a5: 00 00                        	addb	%al, (%rax)
     1a7: 0d 06 04 07 00               	orl	$459782, %eax
     1ac: 00 00                        	addb	%al, (%rax)
     1ae: 8e 03                        	movw	(%rbx), %es
     1b0: 8d 04 8c                     	leal	(%rsp,%rcx,4), %eax
     1b3: 05 83 06 04 6d               	addl	$1828980355, %eax
     1b8: 00 00                        	addb	%al, (%rax)
     1ba: 00 0c 07                     	addb	%cl, (%rdi,%rax)
     1bd: 08 00                        	orb	%al, (%rax)
     1bf: 00                           	<unknown>

Disassembly of section __DWARF,__debug_info:

00000000000001c0 __debug_info:
     1c0: e6 01                        	outb	%al, $1
     1c2: 00 00                        	addb	%al, (%rax)
     1c4: 02 00                        	addb	(%rax), %al
     1c6: 00 00                        	addb	%al, (%rax)
     1c8: 00 00                        	addb	%al, (%rax)
     1ca: 08 01                        	orb	%al, (%rcx)
     1cc: 47 4e                        	<unknown>
     1ce: 55                           	pushq	%rbp
     1cf: 20 43 39                     	andb	%al, 57(%rbx)
     1d2: 39 20                        	cmpl	%esp, (%rax)
     1d4: 31 31                        	xorl	%esi, (%rcx)
     1d6: 2e 32 2e                     	xorb	%cs:(%rsi), %ch
     1d9: 30 20                        	xorb	%ah, (%rax)
     1db: 2d 66 50 49 43               	subl	$1128878182, %eax
     1e0: 20 2d 66 65 6c 69            	andb	%ch, 1768711526(%rip)
     1e6: 6d                           	insl	%dx, %es:(%rdi)
     1e7: 69 6e 61 74 65 2d 75         	imull	$1965909364, 97(%rsi), %ebp
     1ee: 6e                           	outsb	(%rsi), %dx
     1ef: 75 73                        	jne	115 <__debug_info+0xa4>
     1f1: 65 64 2d 64 65 62 75         	subl	$1969382756, %eax
     1f8: 67 2d 73 79 6d 62            	subl	$1651341683, %eax
     1fe: 6f                           	outsl	(%rsi), %dx
     1ff: 6c                           	insb	%dx, %es:(%rdi)
     200: 73 20                        	jae	32 <__debug_info+0x62>
     202: 2d 6d 6d 61 63               	subl	$1667329389, %eax
     207: 6f                           	outsl	(%rsi), %dx
     208: 73 78                        	jae	120 <__debug_info+0xc2>
     20a: 2d 76 65 72 73               	subl	$1936876918, %eax
     20f: 69 6f 6e 2d 6d 69 6e         	imull	$1852402989, 110(%rdi), %ebp
     216: 3d 31 30 2e 31               	cmpl	$825110577, %eax
     21b: 35 2e 30 20 2d               	xorl	$757084206, %eax
     220: 6d                           	insl	%dx, %es:(%rdi)
     221: 74 75                        	je	117 <__debug_info+0xd8>
     223: 6e                           	outsb	(%rsi), %dx
     224: 65 3d 63 6f 72 65            	cmpl	$1701998435, %eax
     22a: 32 20                        	xorb	(%rax), %ah
     22c: 2d 67 20 2d 73               	subl	$1932337255, %eax
     231: 74 64                        	je	100 <__debug_info+0xd7>
     233: 3d 63 39 39 00               	cmpl	$3750243, %eax
     238: 01 75 62                     	addl	%esi, 98(%rbp)
     23b: 70 72                        	jo	114 <__debug_info+0xef>
     23d: 69 6e 74 66 2e 63 00         	imull	$6499942, 116(%rsi), %ebp
     244: 2f                           	<unknown>
     245: 55                           	pushq	%rbp
     246: 73 65                        	jae	101 <__debug_info+0xed>
     248: 72 73                        	jb	115 <__debug_info+0xfd>
     24a: 2f                           	<unknown>
     24b: 79 69                        	jns	105 <__debug_info+0xf6>
     24d: 6c                           	insb	%dx, %es:(%rdi)
     24e: 61                           	<unknown>
     24f: 6e                           	outsb	(%rsi), %dx
     250: 2f                           	<unknown>
     251: 64 65 73 6b                  	jae	107 <__debug_info+0x100>
     255: 74 6f                        	je	111 <__debug_info+0x106>
     257: 70 2f                        	jo	47 <__debug_info+0xc8>
     259: 63 70 68                     	movslq	104(%rax), %esi
     25c: 77 00                        	ja	0 <__debug_info+0x9e>
     25e: 01 00                        	addl	%eax, (%rax)
     260: 00 00                        	addb	%al, (%rax)
     262: 00 00                        	addb	%al, (%rax)
     264: 00 00                        	addb	%al, (%rax)
     266: 00 95 00 00 00 00            	addb	%dl, (%rbp)
     26c: 00 00                        	addb	%al, (%rax)
     26e: 00 00                        	addb	%al, (%rax)
     270: 00 00                        	addb	%al, (%rax)
     272: 00 02                        	addb	%al, (%rdx)
     274: 08 07                        	orb	%al, (%rdi)
     276: 6c                           	insb	%dx, %es:(%rdi)
     277: 6f                           	outsl	(%rsi), %dx
     278: 6e                           	outsb	(%rsi), %dx
     279: 67 20 75 6e                  	andb	%dh, 110(%ebp)
     27d: 73 69                        	jae	105 <__debug_info+0x128>
     27f: 67 6e                        	outsb	(%esi), %dx
     281: 65 64 20 69 6e               	andb	%ch, %fs:110(%rcx)
     286: 74 00                        	je	0 <__debug_info+0xc8>
     288: 02 04 07                     	addb	(%rdi,%rax), %al
     28b: 75 6e                        	jne	110 <__debug_info+0x13b>
     28d: 73 69                        	jae	105 <__debug_info+0x138>
     28f: 67 6e                        	outsb	(%esi), %dx
     291: 65 64 20 69 6e               	andb	%ch, %fs:110(%rcx)
     296: 74 00                        	je	0 <__debug_info+0xd8>
     298: 02 01                        	addb	(%rcx), %al
     29a: 06                           	<unknown>
     29b: 73 69                        	jae	105 <__debug_info+0x146>
     29d: 67 6e                        	outsb	(%esi), %dx
     29f: 65 64 20 63 68               	andb	%ah, %fs:104(%rbx)
     2a4: 61                           	<unknown>
     2a5: 72 00                        	jb	0 <__debug_info+0xe7>
     2a7: 02 01                        	addb	(%rcx), %al
     2a9: 08 75 6e                     	orb	%dh, 110(%rbp)
     2ac: 73 69                        	jae	105 <__debug_info+0x157>
     2ae: 67 6e                        	outsb	(%esi), %dx
     2b0: 65 64 20 63 68               	andb	%ah, %fs:104(%rbx)
     2b5: 61                           	<unknown>
     2b6: 72 00                        	jb	0 <__debug_info+0xf8>
     2b8: 02 02                        	addb	(%rdx), %al
     2ba: 05 73 68 6f 72               	addl	$1919903859, %eax
     2bf: 74 20                        	je	32 <__debug_info+0x121>
     2c1: 69 6e 74 00 02 02 07         	imull	$117572096, 116(%rsi), %ebp
     2c8: 73 68                        	jae	104 <__debug_info+0x172>
     2ca: 6f                           	outsl	(%rsi), %dx
     2cb: 72 74                        	jb	116 <__debug_info+0x181>
     2cd: 20 75 6e                     	andb	%dh, 110(%rbp)
     2d0: 73 69                        	jae	105 <__debug_info+0x17b>
     2d2: 67 6e                        	outsb	(%esi), %dx
     2d4: 65 64 20 69 6e               	andb	%ch, %fs:110(%rcx)
     2d9: 74 00                        	je	0 <__debug_info+0x11b>
     2db: 02 04 05 69 6e 74 00         	addb	7630441(,%rax), %al
     2e2: 02 08                        	addb	(%rax), %cl
     2e4: 05 6c 6f 6e 67               	addl	$1735290732, %eax
     2e9: 20 6c 6f 6e                  	andb	%ch, 110(%rdi,%rbp,2)
     2ed: 67 20 69 6e                  	andb	%ch, 110(%ecx)
     2f1: 74 00                        	je	0 <__debug_info+0x133>
     2f3: 02 08                        	addb	(%rax), %cl
     2f5: 07                           	<unknown>
     2f6: 6c                           	insb	%dx, %es:(%rdi)
     2f7: 6f                           	outsl	(%rsi), %dx
     2f8: 6e                           	outsb	(%rsi), %dx
     2f9: 67 20 6c 6f 6e               	andb	%ch, 110(%edi,%ebp,2)
     2fe: 67 20 75 6e                  	andb	%dh, 110(%ebp)
     302: 73 69                        	jae	105 <__debug_info+0x1ad>
     304: 67 6e                        	outsb	(%esi), %dx
     306: 65 64 20 69 6e               	andb	%ch, %fs:110(%rcx)
     30b: 74 00                        	je	0 <__debug_info+0x14d>
     30d: 02 08                        	addb	(%rax), %cl
     30f: 05 6c 6f 6e 67               	addl	$1735290732, %eax
     314: 20 69 6e                     	andb	%ch, 110(%rcx)
     317: 74 00                        	je	0 <__debug_info+0x159>
     319: 02 01                        	addb	(%rcx), %al
     31b: 06                           	<unknown>
     31c: 63 68 61                     	movslq	97(%rax), %ebp
     31f: 72 00                        	jb	0 <__debug_info+0x161>
     321: 03 59 01                     	addl	1(%rcx), %ebx
     324: 00 00                        	addb	%al, (%rax)
     326: 04 08                        	addb	$8, %al
     328: 61                           	<unknown>
     329: 01 00                        	addl	%eax, (%rax)
     32b: 00 05 01 70 72 69            	addb	%al, 1769107457(%rip)
     331: 6e                           	outsb	(%rsi), %dx
     332: 74 66                        	je	102 <__debug_info+0x1da>
     334: 00 02                        	addb	%al, (%rdx)
     336: b8 06 01 1b 01               	movl	$18546950, %eax
     33b: 00 00                        	addb	%al, (%rax)
     33d: 01 89 01 00 00 06            	addl	%ecx, 100663297(%rcx)
     343: 66 01 00                     	addw	%ax, (%rax)
     346: 00 07                        	addb	%al, (%rdi)
     348: 00 08                        	addb	%cl, (%rax)
     34a: 01 6d 61                     	addl	%ebp, 97(%rbp)
     34d: 69 6e 00 01 0a 05 1b         	imull	$453315073, (%rsi), %ebp
     354: 01 00                        	addl	%eax, (%rax)
     356: 00 1c 00                     	addb	%bl, (%rax,%rax)
     359: 00 00                        	addb	%al, (%rax)
     35b: 00 00                        	addb	%al, (%rax)
     35d: 00 00                        	addb	%al, (%rax)
     35f: 95                           	xchgl	%ebp, %eax
		...
     368: 00 00                        	addb	%al, (%rax)
     36a: 00 09                        	addb	%cl, (%rcx)
     36c: 01 66 00                     	addl	%esp, (%rsi)
     36f: 01 03                        	addl	%eax, (%rbx)
     371: 06                           	<unknown>
     372: e3 01                        	jrcxz	1 <__debug_info+0x1b5>
		...
     37c: 00 00                        	addb	%al, (%rax)
     37e: 1c 00                        	sbbb	$0, %al
     380: 00 00                        	addb	%al, (%rax)
     382: 00 00                        	addb	%al, (%rax)
     384: 00 00                        	addb	%al, (%rax)
     386: 60                           	<unknown>
     387: 00 00                        	addb	%al, (%rax)
     389: 00 e3                        	addb	%ah, %bl
     38b: 01 00                        	addl	%eax, (%rax)
     38d: 00 0a                        	addb	%cl, (%rdx)
     38f: 69 00 01 05 10 1b            	imull	$454034689, (%rax), %eax
     395: 01 00                        	addl	%eax, (%rax)
     397: 00 09                        	addb	%cl, (%rcx)
     399: 03 f8                        	addl	%eax, %edi
     39b: 06                           	<unknown>
     39c: 00 00                        	addb	%al, (%rax)
     39e: 00 00                        	addb	%al, (%rax)
     3a0: 00 00                        	addb	%al, (%rax)
     3a2: 00 04 08                     	addb	%al, (%rax,%rcx)
     3a5: 1b 01                        	sbbl	(%rcx), %eax
     3a7: 00 00                        	addb	%al, (%rax)
     3a9: 00                           	<unknown>

Disassembly of section __DWARF,__debug_abbrev:

00000000000003aa __debug_abbrev:
     3aa: 01 11                        	addl	%edx, (%rcx)
     3ac: 01 25 08 13 0b 03            	addl	%esp, 51057416(%rip)
     3b2: 08 1b                        	orb	%bl, (%rbx)
     3b4: 08 b4 42 0c 11 01 12         	orb	%dh, 302059788(%rdx,%rax,2)
     3bb: 01 10                        	addl	%edx, (%rax)
     3bd: 06                           	<unknown>
     3be: 00 00                        	addb	%al, (%rax)
     3c0: 02 24 00                     	addb	(%rax,%rax), %ah
     3c3: 0b 0b                        	orl	(%rbx), %ecx
     3c5: 3e 0b 03                     	orl	%ds:(%rbx), %eax
     3c8: 08 00                        	orb	%al, (%rax)
     3ca: 00 03                        	addb	%al, (%rbx)
     3cc: 26 00 49 13                  	addb	%cl, %es:19(%rcx)
     3d0: 00 00                        	addb	%al, (%rax)
     3d2: 04 0f                        	addb	$15, %al
     3d4: 00 0b                        	addb	%cl, (%rbx)
     3d6: 0b 49 13                     	orl	19(%rcx), %ecx
     3d9: 00 00                        	addb	%al, (%rax)
     3db: 05 2e 01 3f 0c               	addl	$205455662, %eax
     3e0: 03 08                        	addl	(%rax), %ecx
     3e2: 3a 0b                        	cmpb	(%rbx), %cl
     3e4: 3b 0b                        	cmpl	(%rbx), %ecx
     3e6: 39 0b                        	cmpl	%ecx, (%rbx)
     3e8: 27                           	<unknown>
     3e9: 0c 49                        	orb	$73, %al
     3eb: 13 3c 0c                     	adcl	(%rsp,%rcx), %edi
     3ee: 01 13                        	addl	%edx, (%rbx)
     3f0: 00 00                        	addb	%al, (%rax)
     3f2: 06                           	<unknown>
     3f3: 05 00 49 13 00               	addl	$1263872, %eax
     3f8: 00 07                        	addb	%al, (%rdi)
     3fa: 18 00                        	sbbb	%al, (%rax)
     3fc: 00 00                        	addb	%al, (%rax)
     3fe: 08 2e                        	orb	%ch, (%rsi)
     400: 00 3f                        	addb	%bh, (%rdi)
     402: 0c 03                        	orb	$3, %al
     404: 08 3a                        	orb	%bh, (%rdx)
     406: 0b 3b                        	orl	(%rbx), %edi
     408: 0b 39                        	orl	(%rcx), %edi
     40a: 0b 49 13                     	orl	19(%rcx), %ecx
     40d: 11 01                        	adcl	%eax, (%rcx)
     40f: 12 01                        	adcb	(%rcx), %al
     411: 40 06                        	<unknown>
     413: 00 00                        	addb	%al, (%rax)
     415: 09 2e                        	orl	%ebp, (%rsi)
     417: 01 3f                        	addl	%edi, (%rdi)
     419: 0c 03                        	orb	$3, %al
     41b: 08 3a                        	orb	%bh, (%rdx)
     41d: 0b 3b                        	orl	(%rbx), %edi
     41f: 0b 39                        	orl	(%rcx), %edi
     421: 0b 49 13                     	orl	19(%rcx), %ecx
     424: 11 01                        	adcl	%eax, (%rcx)
     426: 12 01                        	adcb	(%rcx), %al
     428: 40 06                        	<unknown>
     42a: 01 13                        	addl	%edx, (%rbx)
     42c: 00 00                        	addb	%al, (%rax)
     42e: 0a 34 00                     	orb	(%rax,%rax), %dh
     431: 03 08                        	addl	(%rax), %ecx
     433: 3a 0b                        	cmpb	(%rbx), %cl
     435: 3b 0b                        	cmpl	(%rbx), %ecx
     437: 39 0b                        	cmpl	%ecx, (%rbx)
     439: 49 13 02                     	adcq	(%r10), %rax
     43c: 0a 00                        	orb	(%rax), %al
     43e: 00 00                        	addb	%al, (%rax)

Disassembly of section __DWARF,__debug_loc:

0000000000000440 __debug_loc:
     440: 1c 00                        	sbbb	$0, %al
     442: 00 00                        	addb	%al, (%rax)
     444: 00 00                        	addb	%al, (%rax)
     446: 00 00                        	addb	%al, (%rax)
     448: 1d 00 00 00 00               	sbbl	$0, %eax
     44d: 00 00                        	addb	%al, (%rax)
     44f: 00 02                        	addb	%al, (%rdx)
     451: 00 77 08                     	addb	%dh, 8(%rdi)
     454: 1d 00 00 00 00               	sbbl	$0, %eax
     459: 00 00                        	addb	%al, (%rax)
     45b: 00 20                        	addb	%ah, (%rax)
     45d: 00 00                        	addb	%al, (%rax)
     45f: 00 00                        	addb	%al, (%rax)
     461: 00 00                        	addb	%al, (%rax)
     463: 00 02                        	addb	%al, (%rdx)
     465: 00 77 10                     	addb	%dh, 16(%rdi)
     468: 20 00                        	andb	%al, (%rax)
     46a: 00 00                        	addb	%al, (%rax)
     46c: 00 00                        	addb	%al, (%rax)
     46e: 00 00                        	addb	%al, (%rax)
     470: 94                           	xchgl	%esp, %eax
     471: 00 00                        	addb	%al, (%rax)
     473: 00 00                        	addb	%al, (%rax)
     475: 00 00                        	addb	%al, (%rax)
     477: 00 02                        	addb	%al, (%rdx)
     479: 00 76 10                     	addb	%dh, 16(%rsi)
     47c: 94                           	xchgl	%esp, %eax
     47d: 00 00                        	addb	%al, (%rax)
     47f: 00 00                        	addb	%al, (%rax)
     481: 00 00                        	addb	%al, (%rax)
     483: 00 95 00 00 00 00            	addb	%dl, (%rbp)
     489: 00 00                        	addb	%al, (%rax)
     48b: 00 02                        	addb	%al, (%rdx)
     48d: 00 77 08                     	addb	%dh, 8(%rdi)
		...
     4a8: 01 00                        	addl	%eax, (%rax)
     4aa: 00 00                        	addb	%al, (%rax)
     4ac: 00 00                        	addb	%al, (%rax)
     4ae: 00 00                        	addb	%al, (%rax)
     4b0: 02 00                        	addb	(%rax), %al
     4b2: 77 08                        	ja	8 <__debug_loc+0x7c>
     4b4: 01 00                        	addl	%eax, (%rax)
     4b6: 00 00                        	addb	%al, (%rax)
     4b8: 00 00                        	addb	%al, (%rax)
     4ba: 00 00                        	addb	%al, (%rax)
     4bc: 04 00                        	addb	$0, %al
     4be: 00 00                        	addb	%al, (%rax)
     4c0: 00 00                        	addb	%al, (%rax)
     4c2: 00 00                        	addb	%al, (%rax)
     4c4: 02 00                        	addb	(%rax), %al
     4c6: 77 10                        	ja	16 <__debug_loc+0x98>
     4c8: 04 00                        	addb	$0, %al
     4ca: 00 00                        	addb	%al, (%rax)
     4cc: 00 00                        	addb	%al, (%rax)
     4ce: 00 00                        	addb	%al, (%rax)
     4d0: 1b 00                        	sbbl	(%rax), %eax
     4d2: 00 00                        	addb	%al, (%rax)
     4d4: 00 00                        	addb	%al, (%rax)
     4d6: 00 00                        	addb	%al, (%rax)
     4d8: 02 00                        	addb	(%rax), %al
     4da: 76 10                        	jbe	16 <__debug_loc+0xac>
     4dc: 1b 00                        	sbbl	(%rax), %eax
     4de: 00 00                        	addb	%al, (%rax)
     4e0: 00 00                        	addb	%al, (%rax)
     4e2: 00 00                        	addb	%al, (%rax)
     4e4: 1c 00                        	sbbb	$0, %al
     4e6: 00 00                        	addb	%al, (%rax)
     4e8: 00 00                        	addb	%al, (%rax)
     4ea: 00 00                        	addb	%al, (%rax)
     4ec: 02 00                        	addb	(%rax), %al
     4ee: 77 08                        	ja	8 <__debug_loc+0xb8>
		...

Disassembly of section __DWARF,__debug_pubnames:

0000000000000500 __debug_pubnames:
     500: 28 00                        	subb	%al, (%rax)
     502: 00 00                        	addb	%al, (%rax)
     504: 02 00                        	addb	(%rax), %al
     506: 00 00                        	addb	%al, (%rax)
     508: 00 00                        	addb	%al, (%rax)
     50a: ea                           	<unknown>
     50b: 01 00                        	addl	%eax, (%rax)
     50d: 00 6c 01 00                  	addb	%ch, (%rcx,%rax)
     511: 00 70 72                     	addb	%dh, 114(%rax)
     514: 69 6e 74 66 00 89 01         	imull	$25755750, 116(%rsi), %ebp
     51b: 00 00                        	addb	%al, (%rax)
     51d: 6d                           	insl	%dx, %es:(%rdi)
     51e: 61                           	<unknown>
     51f: 69 6e 00 ab 01 00 00         	imull	$427, (%rsi), %ebp
     526: 66 00 00                     	addb	%al, (%rax)
     529: 00 00                        	addb	%al, (%rax)
     52b: 00                           	<unknown>

Disassembly of section __DWARF,__debug_pubtypes:

000000000000052c __debug_pubtypes:
     52c: c7 00 00 00 02 00            	movl	$131072, (%rax)
     532: 00 00                        	addb	%al, (%rax)
     534: 00 00                        	addb	%al, (%rax)
     536: ea                           	<unknown>
     537: 01 00                        	addl	%eax, (%rax)
     539: 00 b3 00 00 00 6c            	addb	%dh, 1811939328(%rbx)
     53f: 6f                           	outsl	(%rsi), %dx
     540: 6e                           	outsb	(%rsi), %dx
     541: 67 20 75 6e                  	andb	%dh, 110(%ebp)
     545: 73 69                        	jae	105 <__debug_pubtypes+0x84>
     547: 67 6e                        	outsb	(%esi), %dx
     549: 65 64 20 69 6e               	andb	%ch, %fs:110(%rcx)
     54e: 74 00                        	je	0 <__debug_pubtypes+0x24>
     550: c8 00 00 00                  	enter	$0, $0
     554: 75 6e                        	jne	110 <__debug_pubtypes+0x98>
     556: 73 69                        	jae	105 <__debug_pubtypes+0x95>
     558: 67 6e                        	outsb	(%esi), %dx
     55a: 65 64 20 69 6e               	andb	%ch, %fs:110(%rcx)
     55f: 74 00                        	je	0 <__debug_pubtypes+0x35>
     561: d8 00                        	fadds	(%rax)
     563: 00 00                        	addb	%al, (%rax)
     565: 73 69                        	jae	105 <__debug_pubtypes+0xa4>
     567: 67 6e                        	outsb	(%esi), %dx
     569: 65 64 20 63 68               	andb	%ah, %fs:104(%rbx)
     56e: 61                           	<unknown>
     56f: 72 00                        	jb	0 <__debug_pubtypes+0x45>
     571: e7 00                        	outl	%eax, $0
     573: 00 00                        	addb	%al, (%rax)
     575: 75 6e                        	jne	110 <__debug_pubtypes+0xb9>
     577: 73 69                        	jae	105 <__debug_pubtypes+0xb6>
     579: 67 6e                        	outsb	(%esi), %dx
     57b: 65 64 20 63 68               	andb	%ah, %fs:104(%rbx)
     580: 61                           	<unknown>
     581: 72 00                        	jb	0 <__debug_pubtypes+0x57>
     583: f8                           	clc
     584: 00 00                        	addb	%al, (%rax)
     586: 00 73 68                     	addb	%dh, 104(%rbx)
     589: 6f                           	outsl	(%rsi), %dx
     58a: 72 74                        	jb	116 <__debug_pubtypes+0xd4>
     58c: 20 69 6e                     	andb	%ch, 110(%rcx)
     58f: 74 00                        	je	0 <__debug_pubtypes+0x65>
     591: 05 01 00 00 73               	addl	$1929379841, %eax
     596: 68 6f 72 74 20               	pushq	$544502383
     59b: 75 6e                        	jne	110 <__debug_pubtypes+0xdf>
     59d: 73 69                        	jae	105 <__debug_pubtypes+0xdc>
     59f: 67 6e                        	outsb	(%esi), %dx
     5a1: 65 64 20 69 6e               	andb	%ch, %fs:110(%rcx)
     5a6: 74 00                        	je	0 <__debug_pubtypes+0x7c>
     5a8: 1b 01                        	sbbl	(%rcx), %eax
     5aa: 00 00                        	addb	%al, (%rax)
     5ac: 69 6e 74 00 22 01 00         	imull	$74240, 116(%rsi), %ebp
     5b3: 00 6c 6f 6e                  	addb	%ch, 110(%rdi,%rbp,2)
     5b7: 67 20 6c 6f 6e               	andb	%ch, 110(%edi,%ebp,2)
     5bc: 67 20 69 6e                  	andb	%ch, 110(%ecx)
     5c0: 74 00                        	je	0 <__debug_pubtypes+0x96>
     5c2: 33 01                        	xorl	(%rcx), %eax
     5c4: 00 00                        	addb	%al, (%rax)
     5c6: 6c                           	insb	%dx, %es:(%rdi)
     5c7: 6f                           	outsl	(%rsi), %dx
     5c8: 6e                           	outsb	(%rsi), %dx
     5c9: 67 20 6c 6f 6e               	andb	%ch, 110(%edi,%ebp,2)
     5ce: 67 20 75 6e                  	andb	%dh, 110(%ebp)
     5d2: 73 69                        	jae	105 <__debug_pubtypes+0x111>
     5d4: 67 6e                        	outsb	(%esi), %dx
     5d6: 65 64 20 69 6e               	andb	%ch, %fs:110(%rcx)
     5db: 74 00                        	je	0 <__debug_pubtypes+0xb1>
     5dd: 4d 01 00                     	addq	%r8, (%r8)
     5e0: 00 6c 6f 6e                  	addb	%ch, 110(%rdi,%rbp,2)
     5e4: 67 20 69 6e                  	andb	%ch, 110(%ecx)
     5e8: 74 00                        	je	0 <__debug_pubtypes+0xbe>
     5ea: 59                           	popq	%rcx
     5eb: 01 00                        	addl	%eax, (%rax)
     5ed: 00 63 68                     	addb	%ah, 104(%rbx)
     5f0: 61                           	<unknown>
     5f1: 72 00                        	jb	0 <__debug_pubtypes+0xc7>
     5f3: 00 00                        	addb	%al, (%rax)
     5f5: 00 00                        	addb	%al, (%rax)

Disassembly of section __DWARF,__debug_aranges:

00000000000005f7 __debug_aranges:
     5f7: 2c 00                        	subb	$0, %al
     5f9: 00 00                        	addb	%al, (%rax)
     5fb: 02 00                        	addb	(%rax), %al
     5fd: 00 00                        	addb	%al, (%rax)
     5ff: 00 00                        	addb	%al, (%rax)
     601: 08 00                        	orb	%al, (%rax)
		...
     60f: 95                           	xchgl	%ebp, %eax
		...
     624: 00 00                        	addb	%al, (%rax)
     626: 00                           	<unknown>

Disassembly of section __DWARF,__debug_line:

0000000000000627 __debug_line:
     627: cd 00                        	int	$0
     629: 00 00                        	addb	%al, (%rax)
     62b: 04 00                        	addb	$0, %al
     62d: 84 00                        	testb	%al, (%rax)
     62f: 00 00                        	addb	%al, (%rax)
     631: 01 01                        	addl	%eax, (%rcx)
     633: 01 fb                        	addl	%edi, %ebx
     635: 0e                           	<unknown>
     636: 0d 00 01 01 01               	orl	$16843008, %eax
     63b: 01 00                        	addl	%eax, (%rax)
     63d: 00 00                        	addb	%al, (%rax)
     63f: 01 00                        	addl	%eax, (%rax)
     641: 00 01                        	addb	%al, (%rcx)
     643: 2f                           	<unknown>
     644: 75 73                        	jne	115 <__debug_line+0x92>
     646: 72 2f                        	jb	47 <__debug_line+0x50>
     648: 6c                           	insb	%dx, %es:(%rdi)
     649: 6f                           	outsl	(%rsi), %dx
     64a: 63 61 6c                     	movslq	108(%rcx), %esp
     64d: 2f                           	<unknown>
     64e: 43 65                        	gs
     650: 6c                           	insb	%dx, %es:(%rdi)
     651: 6c                           	insb	%dx, %es:(%rdi)
     652: 61                           	<unknown>
     653: 72 2f                        	jb	47 <__debug_line+0x5d>
     655: 67 63 63 2f                  	movslq	47(%ebx), %esp
     659: 31 31                        	xorl	%esi, (%rcx)
     65b: 2e 32 2e                     	xorb	%cs:(%rsi), %ch
     65e: 30 2f                        	xorb	%ch, (%rdi)
     660: 6c                           	insb	%dx, %es:(%rdi)
     661: 69 62 2f 67 63 63 2f         	imull	$795042663, 47(%rdx), %esp
     668: 31 31                        	xorl	%esi, (%rcx)
     66a: 2f                           	<unknown>
     66b: 67 63 63 2f                  	movslq	47(%ebx), %esp
     66f: 78 38                        	js	56 <__debug_line+0x82>
     671: 36 5f                        	popq	%rdi
     673: 36 34 2d                     	xorb	$45, %al
     676: 61                           	<unknown>
     677: 70 70                        	jo	112 <__debug_line+0xc2>
     679: 6c                           	insb	%dx, %es:(%rdi)
     67a: 65 2d 64 61 72 77            	subl	$2003984740, %eax
     680: 69 6e 31 39 2f 31 31         	imull	$825306937, 49(%rsi), %ebp
     687: 2e 32 2e                     	xorb	%cs:(%rsi), %ch
     68a: 30 2f                        	xorb	%ch, (%rdi)
     68c: 69 6e 63 6c 75 64 65         	imull	$1701082476, 99(%rsi), %ebp
     693: 2d 66 69 78 65               	subl	$1702390118, %eax
     698: 64 00 00                     	addb	%al, %fs:(%rax)
     69b: 75 62                        	jne	98 <__debug_line+0xd8>
     69d: 70 72                        	jo	114 <__debug_line+0xea>
     69f: 69 6e 74 66 2e 63 00         	imull	$6499942, 116(%rsi), %ebp
     6a6: 00 00                        	addb	%al, (%rax)
     6a8: 00 73 74                     	addb	%dh, 116(%rbx)
     6ab: 64 69 6f 2e 68 00 01 00      	imull	$65640, %fs:46(%rdi), %ebp
     6b3: 00 00                        	addb	%al, (%rax)
     6b5: 05 01 00 09 02               	addl	$34144257, %eax
		...
     6c2: 15 05 06 4c 05               	adcl	$88868357, %eax
     6c7: 0c e5                        	orb	$-27, %al
     6c9: 05 01 75 31 05               	addl	$87127297, %eax
     6ce: 37                           	<unknown>
     6cf: ad                           	lodsl	(%rsi), %eax
     6d0: 05 05 9e 05 31               	addl	$822451717, %eax
     6d5: 3c 05                        	cmpb	$5, %al
     6d7: 05 9e 05 2b 3c               	addl	$1009452446, %eax
     6dc: 05 05 9e 05 25               	addl	$621125125, %eax
     6e1: 3c 05                        	cmpb	$5, %al
     6e3: 05 9e 05 1f 2e               	addl	$773784990, %eax
     6e8: 05 05 9e 05 0c               	addl	$201694725, %eax
     6ed: 02 23                        	addb	(%rbx), %ah
     6ef: 13 05 01 59 02 09            	adcl	151148801(%rip), %eax
     6f5: 00 01                        	addb	%al, (%rcx)
     6f7: 01                           	<unknown>
```
