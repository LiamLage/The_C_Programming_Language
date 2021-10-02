	.file	"funwithstrings.c"
	.text
	.def	printf;	.scl	3;	.type	32;	.endef
	.seh_proc	printf
printf:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	leaq	48(%rsp), %rbp
	.seh_setframe	%rbp, 48
	.seh_endprologue
	movq	%rcx, 32(%rbp)
	movq	%rdx, 40(%rbp)
	movq	%r8, 48(%rbp)
	movq	%r9, 56(%rbp)
	leaq	40(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rbx
	movl	$1, %ecx
	movq	__imp___acrt_iob_func(%rip), %rax
	call	*%rax
	movq	%rbx, %r8
	movq	32(%rbp), %rdx
	movq	%rax, %rcx
	call	__mingw_vfprintf
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.globl	get_string_length
	.def	get_string_length;	.scl	2;	.type	32;	.endef
	.seh_proc	get_string_length
get_string_length:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L4
.L5:
	addl	$1, -4(%rbp)
.L4:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L5
	movl	-4(%rbp), %eax
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	copy_string
	.def	copy_string;	.scl	2;	.type	32;	.endef
	.seh_proc	copy_string
copy_string:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L8
.L9:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rcx
	movq	24(%rbp), %rdx
	addq	%rcx, %rdx
	movzbl	(%rax), %eax
	movb	%al, (%rdx)
	addl	$1, -4(%rbp)
.L8:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L9
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	24(%rbp), %rax
	addq	%rdx, %rax
	movb	$0, (%rax)
	nop
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	reverse0
	.def	reverse0;	.scl	2;	.type	32;	.endef
	.seh_proc	reverse0
reverse0:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rcx
	call	get_string_length
	movl	%eax, -8(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L11
.L12:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	movb	%al, -9(%rbp)
	movl	-8(%rbp), %eax
	subl	$1, %eax
	subl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rcx
	movq	16(%rbp), %rdx
	addq	%rcx, %rdx
	movzbl	(%rax), %eax
	movb	%al, (%rdx)
	movl	-8(%rbp), %eax
	subl	$1, %eax
	subl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	16(%rbp), %rax
	addq	%rax, %rdx
	movzbl	-9(%rbp), %eax
	movb	%al, (%rdx)
	addl	$1, -4(%rbp)
.L11:
	movl	-8(%rbp), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	cmpl	%eax, -4(%rbp)
	jl	.L12
	nop
	nop
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	reverse1
	.def	reverse1;	.scl	2;	.type	32;	.endef
	.seh_proc	reverse1
reverse1:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rcx
	call	strlen
	movl	%eax, -12(%rbp)
	movl	$0, -4(%rbp)
	movl	-12(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -8(%rbp)
	jmp	.L14
.L15:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	movb	%al, -13(%rbp)
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rcx
	movq	16(%rbp), %rdx
	addq	%rcx, %rdx
	movzbl	(%rax), %eax
	movb	%al, (%rdx)
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	16(%rbp), %rax
	addq	%rax, %rdx
	movzbl	-13(%rbp), %eax
	movb	%al, (%rdx)
	addl	$1, -4(%rbp)
	subl	$1, -8(%rbp)
.L14:
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jl	.L15
	nop
	nop
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	reverse2
	.def	reverse2;	.scl	2;	.type	32;	.endef
	.seh_proc	reverse2
reverse2:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	32(%rbp), %rax
	subl	$1, %eax
	movl	%eax, -4(%rbp)
	movl	$0, -8(%rbp)
	jmp	.L17
.L18:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movl	-8(%rbp), %edx
	movslq	%edx, %rcx
	movq	24(%rbp), %rdx
	addq	%rcx, %rdx
	movzbl	(%rax), %eax
	movb	%al, (%rdx)
	subl	$1, -4(%rbp)
	addl	$1, -8(%rbp)
.L17:
	cmpl	$0, -4(%rbp)
	jns	.L18
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	24(%rbp), %rax
	addq	%rdx, %rax
	movb	$0, (%rax)
	nop
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	reverse3
	.def	reverse3;	.scl	2;	.type	32;	.endef
	.seh_proc	reverse3
reverse3:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rcx
	call	strlen
	leaq	-1(%rax), %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movq	%rax, -8(%rbp)
	jmp	.L20
.L21:
	movq	16(%rbp), %rax
	movzbl	(%rax), %eax
	movb	%al, -9(%rbp)
	movq	-8(%rbp), %rax
	movzbl	(%rax), %edx
	movq	16(%rbp), %rax
	movb	%dl, (%rax)
	movq	-8(%rbp), %rax
	movzbl	-9(%rbp), %edx
	movb	%dl, (%rax)
	addq	$1, 16(%rbp)
	subq	$1, -8(%rbp)
.L20:
	movq	16(%rbp), %rax
	cmpq	-8(%rbp), %rax
	jb	.L21
	nop
	nop
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	reverse3a
	.def	reverse3a;	.scl	2;	.type	32;	.endef
	.seh_proc	reverse3a
reverse3a:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rcx
	call	strlen
	leaq	-1(%rax), %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movq	%rax, -8(%rbp)
	jmp	.L23
.L24:
	movq	16(%rbp), %rax
	movzbl	(%rax), %eax
	movb	%al, -9(%rbp)
	movq	-8(%rbp), %rax
	movzbl	(%rax), %edx
	movq	16(%rbp), %rax
	movb	%dl, (%rax)
	movq	-8(%rbp), %rax
	movzbl	-9(%rbp), %edx
	movb	%dl, (%rax)
	addq	$1, 16(%rbp)
	subq	$1, -8(%rbp)
.L23:
	movq	16(%rbp), %rax
	cmpq	-8(%rbp), %rax
	jb	.L24
	nop
	nop
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	reverse4
	.def	reverse4;	.scl	2;	.type	32;	.endef
	.seh_proc	reverse4
reverse4:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	%edx, 24(%rbp)
	cmpl	$1, 24(%rbp)
	jle	.L28
	movq	16(%rbp), %rax
	movzbl	(%rax), %eax
	movb	%al, -1(%rbp)
	movl	24(%rbp), %eax
	cltq
	leaq	-1(%rax), %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %edx
	movq	16(%rbp), %rax
	movb	%dl, (%rax)
	movl	24(%rbp), %eax
	cltq
	leaq	-1(%rax), %rdx
	movq	16(%rbp), %rax
	addq	%rax, %rdx
	movzbl	-1(%rbp), %eax
	movb	%al, (%rdx)
	movl	24(%rbp), %eax
	leal	-2(%rax), %edx
	movq	16(%rbp), %rax
	addq	$1, %rax
	movq	%rax, %rcx
	call	reverse4
	jmp	.L25
.L28:
	nop
.L25:
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	reverse5
	.def	reverse5;	.scl	2;	.type	32;	.endef
	.seh_proc	reverse5
reverse5:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rcx
	call	strlen
	movl	%eax, -8(%rbp)
	movl	-8(%rbp), %eax
	addl	$1, %eax
	cltq
	movq	%rax, %rcx
	call	malloc
	movq	%rax, -16(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L30
.L31:
	movl	-8(%rbp), %eax
	subl	$1, %eax
	subl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rcx
	movq	-16(%rbp), %rdx
	addq	%rcx, %rdx
	movzbl	(%rax), %eax
	movb	%al, (%rdx)
	addl	$1, -4(%rbp)
.L30:
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jl	.L31
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	-16(%rbp), %rax
	addq	%rdx, %rax
	movb	$0, (%rax)
	movq	-16(%rbp), %rax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	reverse6
	.def	reverse6;	.scl	2;	.type	32;	.endef
	.seh_proc	reverse6
reverse6:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rcx
	call	strlen
	addq	$1, %rax
	movq	%rax, %rcx
	call	malloc
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	16(%rbp), %rdx
	movq	%rax, %rcx
	call	strcpy
	movq	-8(%rbp), %rax
	movq	%rax, %rcx
	call	reverse3
	movq	-8(%rbp), %rax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	reverse7
	.def	reverse7;	.scl	2;	.type	32;	.endef
	.seh_proc	reverse7
reverse7:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$64, %rsp
	.seh_stackalloc	64
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rcx
	call	strlen
	movl	%eax, -8(%rbp)
	movl	-8(%rbp), %eax
	addl	$1, %eax
	cltq
	movq	%rax, %rcx
	call	malloc
	movq	%rax, -16(%rbp)
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, %r8
	movl	$0, %edx
	movq	%rax, %rcx
	call	memset
	movl	-8(%rbp), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, -4(%rbp)
	jmp	.L36
.L37:
	call	rand
	movl	-8(%rbp), %edx
	movl	%edx, %ecx
	shrl	$31, %ecx
	addl	%ecx, %edx
	sarl	%edx
	movl	%edx, %ecx
	cltd
	idivl	%ecx
	movl	%edx, -20(%rbp)
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	-16(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L36
	movl	-8(%rbp), %eax
	subl	$1, %eax
	subl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movl	-20(%rbp), %edx
	movslq	%edx, %rcx
	movq	-16(%rbp), %rdx
	addq	%rcx, %rdx
	movzbl	(%rax), %eax
	movb	%al, (%rdx)
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movl	-8(%rbp), %edx
	subl	$1, %edx
	subl	-20(%rbp), %edx
	movslq	%edx, %rcx
	movq	-16(%rbp), %rdx
	addq	%rcx, %rdx
	movzbl	(%rax), %eax
	movb	%al, (%rdx)
	subl	$1, -4(%rbp)
.L36:
	cmpl	$0, -4(%rbp)
	jne	.L37
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	-16(%rbp), %rax
	addq	%rdx, %rax
	movb	$0, (%rax)
	movq	-16(%rbp), %rax
	addq	$64, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "Hello World! I'm string 1.\0"
.LC1:
	.ascii "Hello World!\12\0"
.LC2:
	.ascii "%s\12\0"
.LC3:
	.ascii "Print a backslash \\ \12\0"
.LC4:
	.ascii "%s has length %d bytes\12\0"
.LC5:
	.ascii "%s\12\12\0"
.LC6:
	.ascii "r0\11%s\12\0"
.LC7:
	.ascii "r1\11%s\12\0"
.LC8:
	.ascii "r2\11%s\12\0"
.LC9:
	.ascii "r3\11%s\12\0"
.LC10:
	.ascii "r3a\11%s\12\0"
.LC11:
	.ascii "r4\11%s\12\0"
.LC12:
	.ascii "r5\11%s\12\0"
.LC13:
	.ascii "r6\11%s\12\0"
.LC14:
	.ascii "r7\11%s\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	subq	$1616, %rsp
	.seh_stackalloc	1616
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movl	%ecx, 1504(%rbp)
	movq	%rdx, 1512(%rbp)
	call	__main
	leaq	.LC0(%rip), %rax
	movq	%rax, 1480(%rbp)
	movabsq	$8022916924116329800, %rax
	movabsq	$7865335676573871218, %rdx
	movq	%rax, 1440(%rbp)
	movq	%rdx, 1448(%rbp)
	movabsq	$2334956330985747232, %rax
	movq	%rax, 1456(%rbp)
	movw	$11826, 1464(%rbp)
	movb	$0, 1466(%rbp)
	leaq	.LC1(%rip), %rcx
	call	printf
	movq	1480(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC2(%rip), %rcx
	call	printf
	leaq	1440(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC2(%rip), %rcx
	call	printf
	leaq	.LC3(%rip), %rcx
	call	printf
	movq	1480(%rbp), %rax
	movq	%rax, %rcx
	call	get_string_length
	movl	%eax, %edx
	movq	1480(%rbp), %rax
	movl	%edx, %r8d
	movq	%rax, %rdx
	leaq	.LC4(%rip), %rcx
	call	printf
	leaq	1440(%rbp), %rax
	movq	%rax, %rcx
	call	strlen
	movq	%rax, %rdx
	leaq	1440(%rbp), %rax
	movq	%rdx, %r8
	movq	%rax, %rdx
	leaq	.LC4(%rip), %rcx
	call	printf
	leaq	928(%rbp), %rdx
	movq	1480(%rbp), %rax
	movq	%rax, %rcx
	call	copy_string
	leaq	1440(%rbp), %rdx
	leaq	416(%rbp), %rax
	movq	%rax, %rcx
	call	strcpy
	leaq	928(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC2(%rip), %rcx
	call	printf
	leaq	416(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC5(%rip), %rcx
	call	printf
	leaq	928(%rbp), %rax
	movq	%rax, %rcx
	call	reverse0
	leaq	928(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC6(%rip), %rcx
	call	printf
	leaq	928(%rbp), %rax
	movq	%rax, %rcx
	call	reverse1
	leaq	928(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC7(%rip), %rcx
	call	printf
	leaq	928(%rbp), %rax
	movq	%rax, %rcx
	call	strlen
	movq	%rax, %rcx
	leaq	-96(%rbp), %rdx
	leaq	928(%rbp), %rax
	movq	%rcx, %r8
	movq	%rax, %rcx
	call	reverse2
	leaq	-96(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC8(%rip), %rcx
	call	printf
	leaq	928(%rbp), %rax
	movq	%rax, %rcx
	call	reverse3
	leaq	928(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC9(%rip), %rcx
	call	printf
	leaq	928(%rbp), %rax
	movq	%rax, %rcx
	call	reverse3a
	leaq	928(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC10(%rip), %rcx
	call	printf
	leaq	928(%rbp), %rax
	movq	%rax, %rcx
	call	strlen
	movl	%eax, %edx
	leaq	928(%rbp), %rax
	movq	%rax, %rcx
	call	reverse4
	leaq	928(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC11(%rip), %rcx
	call	printf
	leaq	928(%rbp), %rax
	movq	%rax, %rcx
	call	reverse5
	movq	%rax, 1472(%rbp)
	movq	1472(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC12(%rip), %rcx
	call	printf
	movq	1472(%rbp), %rax
	movq	%rax, %rcx
	call	free
	leaq	928(%rbp), %rax
	movq	%rax, %rcx
	call	reverse6
	movq	%rax, 1472(%rbp)
	movq	1472(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC13(%rip), %rcx
	call	printf
	movq	1472(%rbp), %rax
	movq	%rax, %rcx
	call	free
	leaq	928(%rbp), %rax
	movq	%rax, %rcx
	call	reverse7
	movq	%rax, 1472(%rbp)
	movq	1472(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC14(%rip), %rcx
	call	printf
	movq	1472(%rbp), %rax
	movq	%rax, %rcx
	call	free
	movl	$0, %eax
	addq	$1616, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (Rev5, Built by MSYS2 project) 10.3.0"
	.def	__mingw_vfprintf;	.scl	2;	.type	32;	.endef
	.def	strlen;	.scl	2;	.type	32;	.endef
	.def	malloc;	.scl	2;	.type	32;	.endef
	.def	strcpy;	.scl	2;	.type	32;	.endef
	.def	memset;	.scl	2;	.type	32;	.endef
	.def	rand;	.scl	2;	.type	32;	.endef
	.def	free;	.scl	2;	.type	32;	.endef
