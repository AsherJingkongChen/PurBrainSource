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
      1a: 5d                           	popq	%rbp
      1b: c3                           	retq
      1c: 0f 1f 40 00                  	nopl	(%rax)

0000000000000020 _main:
; /Users/yilan/desktop/cphw/ubprintf.c:11
; {
      20: 55                           	pushq	%rbp
      21: 48 89 e5                     	movq	%rsp, %rbp
      24: 48 83 ec 20                  	subq	$32, %rsp
      28: c7 45 fc 00 00 00 00         	movl	$0, -4(%rbp)
; /Users/yilan/desktop/cphw/ubprintf.c:12
;     printf("%d %d %d %d %d", *f(), *f(), *f(), *f(), *f());
      2f: e8 00 00 00 00               	callq	0 <_main+0x14>
      34: 8b 30                        	movl	(%rax), %esi
      36: 89 75 f8                     	movl	%esi, -8(%rbp)
      39: e8 00 00 00 00               	callq	0 <_main+0x1e>
      3e: 8b 10                        	movl	(%rax), %edx
      40: 89 55 f4                     	movl	%edx, -12(%rbp)
      43: e8 00 00 00 00               	callq	0 <_main+0x28>
      48: 8b 08                        	movl	(%rax), %ecx
      4a: 89 4d f0                     	movl	%ecx, -16(%rbp)
      4d: e8 00 00 00 00               	callq	0 <_main+0x32>
      52: 44 8b 00                     	movl	(%rax), %r8d
      55: 44 89 45 ec                  	movl	%r8d, -20(%rbp)
      59: e8 00 00 00 00               	callq	0 <_main+0x3e>
      5e: 44 8b 08                     	movl	(%rax), %r9d
      61: 48 8d 3d 21 00 00 00         	leaq	33(%rip), %rdi
      68: 8b 75 f8                     	movl	-8(%rbp), %esi
      6b: 8b 55 f4                     	movl	-12(%rbp), %edx
      6e: 8b 4d f0                     	movl	-16(%rbp), %ecx
      71: 44 8b 45 ec                  	movl	-20(%rbp), %r8d
      75: b0 00                        	movb	$0, %al
      77: e8 00 00 00 00               	callq	0 <_main+0x5c>
      7c: 31 c9                        	xorl	%ecx, %ecx
      7e: 89 45 e8                     	movl	%eax, -24(%rbp)
; /Users/yilan/desktop/cphw/ubprintf.c:13
;     return 0;
      81: 89 c8                        	movl	%ecx, %eax
      83: 48 83 c4 20                  	addq	$32, %rsp
      87: 5d                           	popq	%rbp
      88: c3                           	retq

Disassembly of section __DATA,__bss:

0000000000000470 _f.i:
...

Disassembly of section __TEXT,__cstring:

0000000000000089 __cstring:
      89: 25 64 20 25 64               	andl	$1680154724, %eax
      8e: 20 25 64 20 25 64            	andb	%ah, 1680154724(%rip)
      94: 20 25                        	<unknown>
      96: 64 00                        	<unknown>

Disassembly of section __DWARF,__debug_str:

0000000000000098 __debug_str:
      98: 41 70 70                     	jo	112 <__debug_str+0x73>
      9b: 6c                           	insb	%dx, %es:(%rdi)
      9c: 65 20 63 6c                  	andb	%ah, %gs:108(%rbx)
      a0: 61                           	<unknown>
      a1: 6e                           	outsb	(%rsi), %dx
      a2: 67 20 76 65                  	andb	%dh, 101(%esi)
      a6: 72 73                        	jb	115 <__debug_str+0x83>
      a8: 69 6f 6e 20 31 32 2e         	imull	$775041312, 110(%rdi), %ebp
      af: 30 2e                        	xorb	%ch, (%rsi)
      b1: 30 20                        	xorb	%ah, (%rax)
      b3: 28 63 6c                     	subb	%ah, 108(%rbx)
      b6: 61                           	<unknown>
      b7: 6e                           	outsb	(%rsi), %dx
      b8: 67 2d 31 32 30 30            	subl	$808464945, %eax
      be: 2e 30 2e                     	xorb	%ch, %cs:(%rsi)
      c1: 33 32                        	xorl	(%rdx), %esi
      c3: 2e 32 29                     	xorb	%cs:(%rcx), %ch
      c6: 00 75 62                     	addb	%dh, 98(%rbp)
      c9: 70 72                        	jo	114 <__debug_str+0xa5>
      cb: 69 6e 74 66 2e 63 00         	imull	$6499942, 116(%rsi), %ebp
      d2: 2f                           	<unknown>
      d3: 41 70 70                     	jo	112 <__debug_str+0xae>
      d6: 6c                           	insb	%dx, %es:(%rdi)
      d7: 69 63 61 74 69 6f 6e         	imull	$1852795252, 97(%rbx), %esp
      de: 73 2f                        	jae	47 <__debug_str+0x77>
      e0: 58                           	popq	%rax
      e1: 63 6f 64                     	movslq	100(%rdi), %ebp
      e4: 65 2e 61                     	<unknown>
      e7: 70 70                        	jo	112 <__debug_str+0xc1>
      e9: 2f                           	<unknown>
      ea: 43 6f                        	outsl	(%rsi), %dx
      ec: 6e                           	outsb	(%rsi), %dx
      ed: 74 65                        	je	101 <__debug_str+0xbc>
      ef: 6e                           	outsb	(%rsi), %dx
      f0: 74 73                        	je	115 <__debug_str+0xcd>
      f2: 2f                           	<unknown>
      f3: 44 65                        	gs
      f5: 76 65                        	jbe	101 <__debug_str+0xc4>
      f7: 6c                           	insb	%dx, %es:(%rdi)
      f8: 6f                           	outsl	(%rsi), %dx
      f9: 70 65                        	jo	101 <__debug_str+0xc8>
      fb: 72 2f                        	jb	47 <__debug_str+0x94>
      fd: 50                           	pushq	%rax
      fe: 6c                           	insb	%dx, %es:(%rdi)
      ff: 61                           	<unknown>
     100: 74 66                        	je	102 <__debug_str+0xd0>
     102: 6f                           	outsl	(%rsi), %dx
     103: 72 6d                        	jb	109 <__debug_str+0xda>
     105: 73 2f                        	jae	47 <__debug_str+0x9e>
     107: 4d 61                        	<unknown>
     109: 63 4f 53                     	movslq	83(%rdi), %ecx
     10c: 58                           	popq	%rax
     10d: 2e 70 6c                     	jo	108 <__debug_str+0xe4>
     110: 61                           	<unknown>
     111: 74 66                        	je	102 <__debug_str+0xe1>
     113: 6f                           	outsl	(%rsi), %dx
     114: 72 6d                        	jb	109 <__debug_str+0xeb>
     116: 2f                           	<unknown>
     117: 44 65                        	gs
     119: 76 65                        	jbe	101 <__debug_str+0xe8>
     11b: 6c                           	insb	%dx, %es:(%rdi)
     11c: 6f                           	outsl	(%rsi), %dx
     11d: 70 65                        	jo	101 <__debug_str+0xec>
     11f: 72 2f                        	jb	47 <__debug_str+0xb8>
     121: 53                           	pushq	%rbx
     122: 44 4b                        	<unknown>
     124: 73 2f                        	jae	47 <__debug_str+0xbd>
     126: 4d 61                        	<unknown>
     128: 63 4f 53                     	movslq	83(%rdi), %ecx
     12b: 58                           	popq	%rax
     12c: 2e 73 64                     	jae	100 <__debug_str+0xfb>
     12f: 6b 00 4d                     	imull	$77, (%rax), %eax
     132: 61                           	<unknown>
     133: 63 4f 53                     	movslq	83(%rdi), %ecx
     136: 58                           	popq	%rax
     137: 2e 73 64                     	jae	100 <__debug_str+0x106>
     13a: 6b 00 2f                     	imull	$47, (%rax), %eax
     13d: 55                           	pushq	%rbp
     13e: 73 65                        	jae	101 <__debug_str+0x10d>
     140: 72 73                        	jb	115 <__debug_str+0x11d>
     142: 2f                           	<unknown>
     143: 79 69                        	jns	105 <__debug_str+0x116>
     145: 6c                           	insb	%dx, %es:(%rdi)
     146: 61                           	<unknown>
     147: 6e                           	outsb	(%rsi), %dx
     148: 2f                           	<unknown>
     149: 64 65 73 6b                  	jae	107 <__debug_str+0x120>
     14d: 74 6f                        	je	111 <__debug_str+0x126>
     14f: 70 2f                        	jo	47 <__debug_str+0xe8>
     151: 63 70 68                     	movslq	104(%rax), %esi
     154: 77 00                        	ja	0 <__debug_str+0xbe>
     156: 69 00 69 6e 74 00            	imull	$7630441, (%rax), %eax
     15c: 66 00 6d 61                  	addb	%ch, 97(%rbp)
     160: 69 6e 00                     	<unknown>

Disassembly of section __DWARF,__debug_abbrev:

0000000000000163 __debug_abbrev:
     163: 01 11                        	addl	%edx, (%rcx)
     165: 01 25 0e 13 05 03            	addl	%esp, 50664206(%rip)
     16b: 0e                           	<unknown>
     16c: 82                           	<unknown>
     16d: 7c 0e                        	jl	14 <__debug_abbrev+0x1a>
     16f: ef                           	outl	%eax, %dx
     170: 7f 0e                        	jg	14 <__debug_abbrev+0x1d>
     172: 10 17                        	adcb	%dl, (%rdi)
     174: 1b 0e                        	sbbl	(%rsi), %ecx
     176: 11 01                        	adcl	%eax, (%rcx)
     178: 12 06                        	adcb	(%rsi), %al
     17a: 00 00                        	addb	%al, (%rax)
     17c: 02 2e                        	addb	(%rsi), %ch
     17e: 01 11                        	addl	%edx, (%rcx)
     180: 01 12                        	addl	%edx, (%rdx)
     182: 06                           	<unknown>
     183: 40 18 03                     	sbbb	%al, (%rbx)
     186: 0e                           	<unknown>
     187: 3a 0b                        	cmpb	(%rbx), %cl
     189: 3b 0b                        	cmpl	(%rbx), %ecx
     18b: 49 13 3f                     	adcq	(%r15), %rdi
     18e: 19 00                        	sbbl	%eax, (%rax)
     190: 00 03                        	addb	%al, (%rbx)
     192: 34 00                        	xorb	$0, %al
     194: 03 0e                        	addl	(%rsi), %ecx
     196: 49 13 3a                     	adcq	(%r10), %rdi
     199: 0b 3b                        	orl	(%rbx), %edi
     19b: 0b 02                        	orl	(%rdx), %eax
     19d: 18 00                        	sbbb	%al, (%rax)
     19f: 00 04 24                     	addb	%al, (%rsp)
     1a2: 00 03                        	addb	%al, (%rbx)
     1a4: 0e                           	<unknown>
     1a5: 3e 0b 0b                     	orl	%ds:(%rbx), %ecx
     1a8: 0b 00                        	orl	(%rax), %eax
     1aa: 00 05 2e 00 11 01            	addb	%al, 17891374(%rip)
     1b0: 12 06                        	adcb	(%rsi), %al
     1b2: 40 18 03                     	sbbb	%al, (%rbx)
     1b5: 0e                           	<unknown>
     1b6: 3a 0b                        	cmpb	(%rbx), %cl
     1b8: 3b 0b                        	cmpl	(%rbx), %ecx
     1ba: 49 13 3f                     	adcq	(%r15), %rdi
     1bd: 19 00                        	sbbl	%eax, (%rax)
     1bf: 00 06                        	addb	%al, (%rsi)
     1c1: 0f 00 49 13                  	strw	19(%rcx)
     1c5: 00 00                        	addb	%al, (%rax)
     1c7: 00                           	<unknown>

Disassembly of section __DWARF,__debug_info:

00000000000001c8 __debug_info:
     1c8: 83 00 00                     	addl	$0, (%rax)
     1cb: 00 04 00                     	addb	%al, (%rax,%rax)
     1ce: 00 00                        	addb	%al, (%rax)
     1d0: 00 00                        	addb	%al, (%rax)
     1d2: 08 01                        	orb	%al, (%rcx)
     1d4: 00 00                        	addb	%al, (%rax)
     1d6: 00 00                        	addb	%al, (%rax)
     1d8: 0c 00                        	orb	$0, %al
     1da: 2f                           	<unknown>
     1db: 00 00                        	addb	%al, (%rax)
     1dd: 00 3a                        	addb	%bh, (%rdx)
     1df: 00 00                        	addb	%al, (%rax)
     1e1: 00 99 00 00 00 00            	addb	%bl, (%rcx)
     1e7: 00 00                        	addb	%al, (%rax)
     1e9: 00 a4 00 00 00 00 00         	addb	%ah, (%rax,%rax)
     1f0: 00 00                        	addb	%al, (%rax)
     1f2: 00 00                        	addb	%al, (%rax)
     1f4: 00 00                        	addb	%al, (%rax)
     1f6: 89 00                        	movl	%eax, (%rax)
     1f8: 00 00                        	addb	%al, (%rax)
     1fa: 02 00                        	addb	(%rax), %al
     1fc: 00 00                        	addb	%al, (%rax)
     1fe: 00 00                        	addb	%al, (%rax)
     200: 00 00                        	addb	%al, (%rax)
     202: 00 1c 00                     	addb	%bl, (%rax,%rax)
     205: 00 00                        	addb	%al, (%rax)
     207: 01 56 c4                     	addl	%edx, -60(%rsi)
     20a: 00 00                        	addb	%al, (%rax)
     20c: 00 01                        	addb	%al, (%rcx)
     20e: 03 81 00 00 00 03            	addl	50331648(%rcx), %eax
     214: be 00 00 00 61               	movl	$1627389952, %esi
     219: 00 00                        	addb	%al, (%rax)
     21b: 00 01                        	addb	%al, (%rcx)
     21d: 05 09 03 70 04               	addl	$74449673, %eax
     222: 00 00                        	addb	%al, (%rax)
     224: 00 00                        	addb	%al, (%rax)
     226: 00 00                        	addb	%al, (%rax)
     228: 00 04 c0                     	addb	%al, (%rax,%rax,8)
     22b: 00 00                        	addb	%al, (%rax)
     22d: 00 05 04 05 20 00            	addb	%al, 2098436(%rip)
     233: 00 00                        	addb	%al, (%rax)
     235: 00 00                        	addb	%al, (%rax)
     237: 00 00                        	addb	%al, (%rax)
     239: 69 00 00 00 01 56            	imull	$1442906112, (%rax), %eax
     23f: c6 00 00                     	movb	$0, (%rax)
     242: 00 01                        	addb	%al, (%rcx)
     244: 0a 61 00                     	orb	(%rcx), %ah
     247: 00 00                        	addb	%al, (%rax)
     249: 06                           	<unknown>
     24a: 61                           	<unknown>
     24b: 00 00                        	addb	%al, (%rax)
     24d: 00 00                        	addb	%al, (%rax)

Disassembly of section __DWARF,__apple_names:

000000000000024f __apple_names:
     24f: 48 53                        	pushq	%rbx
     251: 41 48                        	rex64
     253: 01 00                        	addl	%eax, (%rax)
     255: 00 00                        	addb	%al, (%rax)
     257: 03 00                        	addl	(%rax), %eax
     259: 00 00                        	addb	%al, (%rax)
     25b: 03 00                        	addl	(%rax), %eax
     25d: 00 00                        	addb	%al, (%rax)
     25f: 0c 00                        	orb	$0, %al
     261: 00 00                        	addb	%al, (%rax)
     263: 00 00                        	addb	%al, (%rax)
     265: 00 00                        	addb	%al, (%rax)
     267: 01 00                        	addl	%eax, (%rax)
     269: 00 00                        	addb	%al, (%rax)
     26b: 01 00                        	addl	%eax, (%rax)
     26d: 06                           	<unknown>
     26e: 00 00                        	addb	%al, (%rax)
     270: 00 00                        	addb	%al, (%rax)
     272: 00 02                        	addb	%al, (%rdx)
     274: 00 00                        	addb	%al, (%rax)
     276: 00 ff                        	addb	%bh, %bh
     278: ff ff                        	<unknown>
     27a: ff 0b                        	decl	(%rbx)
     27c: b6 02                        	movb	$2, %dh
     27e: 00 0e                        	addb	%cl, (%rsi)
     280: b6 02                        	movb	$2, %dh
     282: 00 6a 7f                     	addb	%ch, 127(%rdx)
     285: 9a                           	<unknown>
     286: 7c 44                        	jl	68 <__apple_names+0x7d>
     288: 00 00                        	addb	%al, (%rax)
     28a: 00 54 00 00                  	addb	%dl, (%rax,%rax)
     28e: 00 64 00 00                  	addb	%ah, (%rax,%rax)
     292: 00 c4                        	addb	%al, %ah
     294: 00 00                        	addb	%al, (%rax)
     296: 00 01                        	addb	%al, (%rcx)
     298: 00 00                        	addb	%al, (%rax)
     29a: 00 32                        	addb	%dh, (%rdx)
     29c: 00 00                        	addb	%al, (%rax)
     29e: 00 00                        	addb	%al, (%rax)
     2a0: 00 00                        	addb	%al, (%rax)
     2a2: 00 be 00 00 00 01            	addb	%bh, 16777216(%rsi)
     2a8: 00 00                        	addb	%al, (%rax)
     2aa: 00 4b 00                     	addb	%cl, (%rbx)
     2ad: 00 00                        	addb	%al, (%rax)
     2af: 00 00                        	addb	%al, (%rax)
     2b1: 00 00                        	addb	%al, (%rax)
     2b3: c6 00 00                     	movb	$0, (%rax)
     2b6: 00 01                        	addb	%al, (%rcx)
     2b8: 00 00                        	addb	%al, (%rax)
     2ba: 00 68 00                     	addb	%ch, (%rax)
     2bd: 00 00                        	addb	%al, (%rax)
     2bf: 00 00                        	addb	%al, (%rax)
     2c1: 00 00                        	addb	%al, (%rax)

Disassembly of section __DWARF,__apple_objc:

00000000000002c3 __apple_objc:
     2c3: 48 53                        	pushq	%rbx
     2c5: 41 48                        	rex64
     2c7: 01 00                        	addl	%eax, (%rax)
     2c9: 00 00                        	addb	%al, (%rax)
     2cb: 01 00                        	addl	%eax, (%rax)
     2cd: 00 00                        	addb	%al, (%rax)
     2cf: 00 00                        	addb	%al, (%rax)
     2d1: 00 00                        	addb	%al, (%rax)
     2d3: 0c 00                        	orb	$0, %al
     2d5: 00 00                        	addb	%al, (%rax)
     2d7: 00 00                        	addb	%al, (%rax)
     2d9: 00 00                        	addb	%al, (%rax)
     2db: 01 00                        	addl	%eax, (%rax)
     2dd: 00 00                        	addb	%al, (%rax)
     2df: 01 00                        	addl	%eax, (%rax)
     2e1: 06                           	<unknown>
     2e2: 00 ff                        	addb	%bh, %bh
     2e4: ff ff                        	<unknown>
     2e6: ff                           	<unknown>

Disassembly of section __DWARF,__apple_namespac:

00000000000002e7 __apple_namespac:
     2e7: 48 53                        	pushq	%rbx
     2e9: 41 48                        	rex64
     2eb: 01 00                        	addl	%eax, (%rax)
     2ed: 00 00                        	addb	%al, (%rax)
     2ef: 01 00                        	addl	%eax, (%rax)
     2f1: 00 00                        	addb	%al, (%rax)
     2f3: 00 00                        	addb	%al, (%rax)
     2f5: 00 00                        	addb	%al, (%rax)
     2f7: 0c 00                        	orb	$0, %al
     2f9: 00 00                        	addb	%al, (%rax)
     2fb: 00 00                        	addb	%al, (%rax)
     2fd: 00 00                        	addb	%al, (%rax)
     2ff: 01 00                        	addl	%eax, (%rax)
     301: 00 00                        	addb	%al, (%rax)
     303: 01 00                        	addl	%eax, (%rax)
     305: 06                           	<unknown>
     306: 00 ff                        	addb	%bh, %bh
     308: ff ff                        	<unknown>
     30a: ff                           	<unknown>

Disassembly of section __DWARF,__apple_types:

000000000000030b __apple_types:
     30b: 48 53                        	pushq	%rbx
     30d: 41 48                        	rex64
     30f: 01 00                        	addl	%eax, (%rax)
     311: 00 00                        	addb	%al, (%rax)
     313: 01 00                        	addl	%eax, (%rax)
     315: 00 00                        	addb	%al, (%rax)
     317: 01 00                        	addl	%eax, (%rax)
     319: 00 00                        	addb	%al, (%rax)
     31b: 14 00                        	adcb	$0, %al
     31d: 00 00                        	addb	%al, (%rax)
     31f: 00 00                        	addb	%al, (%rax)
     321: 00 00                        	addb	%al, (%rax)
     323: 03 00                        	addl	(%rax), %eax
     325: 00 00                        	addb	%al, (%rax)
     327: 01 00                        	addl	%eax, (%rax)
     329: 06                           	<unknown>
     32a: 00 03                        	addb	%al, (%rbx)
     32c: 00 05 00 04 00 0b            	addb	%al, 184550400(%rip)
     332: 00 00                        	addb	%al, (%rax)
     334: 00 00                        	addb	%al, (%rax)
     336: 00 30                        	addb	%dh, (%rax)
     338: 80 88 0b 34 00 00 00         	orb	$0, 13323(%rax)
     33f: c0 00 00                     	rolb	$0, (%rax)
     342: 00 01                        	addb	%al, (%rcx)
     344: 00 00                        	addb	%al, (%rax)
     346: 00 61 00                     	addb	%ah, (%rcx)
     349: 00 00                        	addb	%al, (%rax)
     34b: 24 00                        	andb	$0, %al
     34d: 00 00                        	addb	%al, (%rax)
     34f: 00 00                        	addb	%al, (%rax)
     351: 00                           	<unknown>

Disassembly of section __LD,__compact_unwind:

0000000000000358 __compact_unwind:
		...
     360: 1c 00                        	sbbb	$0, %al
     362: 00 00                        	addb	%al, (%rax)
     364: 00 00                        	addb	%al, (%rax)
     366: 00 01                        	addb	%al, (%rcx)
		...
     378: 20 00                        	andb	%al, (%rax)
     37a: 00 00                        	addb	%al, (%rax)
     37c: 00 00                        	addb	%al, (%rax)
     37e: 00 00                        	addb	%al, (%rax)
     380: 69 00 00 00 00 00            	imull	$0, (%rax), %eax
     386: 00 01                        	addb	%al, (%rcx)
		...

Disassembly of section __TEXT,__eh_frame:

0000000000000398 __eh_frame:
     398: 14 00                        	adcb	$0, %al
     39a: 00 00                        	addb	%al, (%rax)
     39c: 00 00                        	addb	%al, (%rax)
     39e: 00 00                        	addb	%al, (%rax)
     3a0: 01 7a 52                     	addl	%edi, 82(%rdx)
     3a3: 00 01                        	addb	%al, (%rcx)
     3a5: 78 10                        	js	16 <__eh_frame+0x1f>
     3a7: 01 10                        	addl	%edx, (%rax)
     3a9: 0c 07                        	orb	$7, %al
     3ab: 08 90 01 00 00 24            	orb	%dl, 603979777(%rax)
     3b1: 00 00                        	addb	%al, (%rax)
     3b3: 00 1c 00                     	addb	%bl, (%rax,%rax)
     3b6: 00 00                        	addb	%al, (%rax)
     3b8: 48 fc                        	cld
     3ba: ff ff                        	<unknown>
     3bc: ff ff                        	<unknown>
     3be: ff ff                        	<unknown>
     3c0: 1c 00                        	sbbb	$0, %al
     3c2: 00 00                        	addb	%al, (%rax)
     3c4: 00 00                        	addb	%al, (%rax)
     3c6: 00 00                        	addb	%al, (%rax)
     3c8: 00 41 0e                     	addb	%al, 14(%rcx)
     3cb: 10 86 02 43 0d 06            	adcb	%al, 101532418(%rsi)
     3d1: 00 00                        	addb	%al, (%rax)
     3d3: 00 00                        	addb	%al, (%rax)
     3d5: 00 00                        	addb	%al, (%rax)
     3d7: 00 24 00                     	addb	%ah, (%rax,%rax)
     3da: 00 00                        	addb	%al, (%rax)
     3dc: 44 00 00                     	addb	%r8b, (%rax)
     3df: 00 40 fc                     	addb	%al, -4(%rax)
     3e2: ff ff                        	<unknown>
     3e4: ff ff                        	<unknown>
     3e6: ff ff                        	<unknown>
     3e8: 69 00 00 00 00 00            	imull	$0, (%rax), %eax
     3ee: 00 00                        	addb	%al, (%rax)
     3f0: 00 41 0e                     	addb	%al, 14(%rcx)
     3f3: 10 86 02 43 0d 06            	adcb	%al, 101532418(%rsi)
     3f9: 00 00                        	addb	%al, (%rax)
     3fb: 00 00                        	addb	%al, (%rax)
     3fd: 00 00                        	addb	%al, (%rax)
     3ff: 00                           	<unknown>

Disassembly of section __DWARF,__debug_line:

0000000000000400 __debug_line:
     400: 69 00 00 00 04 00            	imull	$262144, (%rax), %eax
     406: 22 00                        	andb	(%rax), %al
     408: 00 00                        	addb	%al, (%rax)
     40a: 01 01                        	addl	%eax, (%rcx)
     40c: 01 fb                        	addl	%edi, %ebx
     40e: 0e                           	<unknown>
     40f: 0d 00 01 01 01               	orl	$16843008, %eax
     414: 01 00                        	addl	%eax, (%rax)
     416: 00 00                        	addb	%al, (%rax)
     418: 01 00                        	addl	%eax, (%rax)
     41a: 00 01                        	addb	%al, (%rcx)
     41c: 00 75 62                     	addb	%dh, 98(%rbp)
     41f: 70 72                        	jo	114 <__debug_line+0x93>
     421: 69 6e 74 66 2e 63 00         	imull	$6499942, 116(%rsi), %ebp
     428: 00 00                        	addb	%al, (%rax)
     42a: 00 00                        	addb	%al, (%rax)
     42c: 00 09                        	addb	%cl, (%rcx)
     42e: 02 00                        	addb	(%rax), %al
     430: 00 00                        	addb	%al, (%rax)
     432: 00 00                        	addb	%al, (%rax)
     434: 00 00                        	addb	%al, (%rax)
     436: 00 15 05 06 0a 4c            	addb	%dl, 1275725317(%rip)
     43c: 05 05 e5 05 00               	addl	$386309, %eax
     441: cc                           	int3
     442: 05 1f 0a e5 05               	addl	$98896415, %eax
     447: 1e                           	<unknown>
     448: 06                           	<unknown>
     449: 58                           	popq	%rax
     44a: 05 25 58 05 24               	addl	$604330021, %eax
     44f: 58                           	popq	%rax
     450: 05 2b 58 05 2a               	addl	$704993323, %eax
     455: 58                           	popq	%rax
     456: 05 31 58 05 30               	addl	$805656625, %eax
     45b: 58                           	popq	%rax
     45c: 05 37 74 05 36               	addl	$906327095, %eax
     461: 58                           	popq	%rax
     462: 05 05 3c 06 08               	addl	$134626309, %eax
     467: e5 02                        	inl	$2, %eax
     469: 08 00                        	orb	%al, (%rax)
     46b: 01 01                        	addl	%eax, (%rcx)
```
