	.file	"simplePrint1.c"
	.intel_syntax noprefix
 # GNU C17 (Rev3, Built by MSYS2 project) version 13.2.0 (x86_64-w64-mingw32)
 #	compiled by GNU C version 13.2.0, GMP version 6.3.0, MPFR version 4.2.1, MPC version 1.3.1, isl version isl-0.26-GMP

 # GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
 # options passed: -masm=intel -mtune=generic -march=nocona -Og
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "hello world!\15\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	sub	rsp, 40	 #,
	.seh_stackalloc	40
	.seh_endprologue
 # simplePrint1.c:6: {
	call	__main	 #
 # simplePrint1.c:7: 	printf("hello world!\r\n");
	lea	rcx, .LC0[rip]	 # tmp83,
	call	puts	 #
 # simplePrint1.c:8: 	printf("%c",c);
	mov	ecx, 65	 #,
	call	putchar	 #
 # simplePrint1.c:9: }
	mov	eax, 0	 #,
	add	rsp, 40	 #,
	ret	
	.seh_endproc
	.ident	"GCC: (Rev3, Built by MSYS2 project) 13.2.0"
	.def	puts;	.scl	2;	.type	32;	.endef
	.def	putchar;	.scl	2;	.type	32;	.endef
