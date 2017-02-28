	.file	"5.9.c"
	.text
	.p2align 4,,15
	.globl	merge
	.type	merge, @function
merge:
.LFB24:
	.cfi_startproc
	testq	%rcx, %rcx
	jle	.L18
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	xorl	%r11d, %r11d
	xorl	%eax, %eax
	xorl	%r8d, %r8d
	pushq	%rbx
	.cfi_def_cfa_offset 24
	.cfi_offset 3, -24
	jmp	.L4
	.p2align 4,,10
	.p2align 3
.L20:
	cmpq	%rcx, %r8
	jge	.L3
.L4:
	# src1 in %rdi, src2 in %rsi, dest in %rdx, n in %rcx
	movq	(%rdi,%r8,8), %r9
	movq	(%rsi,%rax,8), %r10
	leaq	1(%r8), %rbp
	leaq	1(%rax), %rbx
	cmpq	%r10, %r9
	cmovge	%rbx, %rax
	cmovl	%rbp, %r8
	addq	$1, %r11
	cmpq	%r9, %r10
	cmovle	%r10, %r9
	cmpq	%rcx, %rax
	movq	%r9, -8(%rdx,%r11,8)
	jl	.L20
.L3:
	cmpq	%r8, %rcx
	jle	.L5
	movq	%rcx, %rbp
	leaq	(%rdi,%r8,8), %rbx
	leaq	(%rdx,%r11,8), %r10
	subq	%r8, %rbp
	xorl	%esi, %esi
	.p2align 4,,10
	.p2align 3
.L7:
	movq	(%rbx,%rsi,8), %r9
	movq	%r9, (%r10,%rsi,8)
	addq	$1, %rsi
	cmpq	%rbp, %rsi
	jne	.L7
	addq	%rcx, %r11
	subq	%r8, %r11
.L5:
	cmpq	%rax, %rcx
	jle	.L1
	leaq	(%rdx,%r11,8), %rsi
	subq	%rax, %rcx
	leaq	(%rdi,%rax,8), %rdi
	xorl	%eax, %eax
	.p2align 4,,10
	.p2align 3
.L9:
	movq	(%rdi,%rax,8), %rdx
	movq	%rdx, (%rsi,%rax,8)
	addq	$1, %rax
	cmpq	%rcx, %rax
	jne	.L9
.L1:
	popq	%rbx
	.cfi_restore 3
	.cfi_def_cfa_offset 16
	popq	%rbp
	.cfi_restore 6
	.cfi_def_cfa_offset 8
.L18:
	rep ret
	.cfi_endproc
.LFE24:
	.size	merge, .-merge
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
