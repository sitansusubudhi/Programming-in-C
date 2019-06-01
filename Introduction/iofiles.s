	.file	"iofiles.c"
	.def	__main;	.scl	2;	.type	32;	.endef
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	call	__getreent
	movq	8(%rax), %rax
	movq	%rax, %rcx
	call	getc
	movl	%eax, -4(%rbp)
	jmp	.L2
.L3:
	call	__getreent
	movq	16(%rax), %rdx
	movl	-4(%rbp), %eax
	movl	%eax, %ecx
	call	putc
	call	__getreent
	movq	8(%rax), %rax
	movq	%rax, %rcx
	call	getc
	movl	%eax, -4(%rbp)
.L2:
	cmpl	$-1, -4(%rbp)
	jne	.L3
	nop
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (GNU) 5.4.0"
	.def	__getreent;	.scl	2;	.type	32;	.endef
	.def	getc;	.scl	2;	.type	32;	.endef
	.def	putc;	.scl	2;	.type	32;	.endef
