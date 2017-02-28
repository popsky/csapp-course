	.file	"simd_v1_combine.c"
	.text
	.globl	simd_v1_combine
	.type	simd_v1_combine, @function
simd_v1_combine:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	andq	$-32, %rsp
	subq	$208, %rsp
	movq	%rdi, 40(%rsp)
	movq	%rsi, 32(%rsp)
	movq	40(%rsp), %rax
	movq	%rax, %rdi
	call	get_vec_start
	movq	%rax, 64(%rsp)
	movq	40(%rsp), %rax
	movq	%rax, %rdi
	call	vec_length
	movl	%eax, 52(%rsp)
	movabsq	$4607182418800017408, %rax
	movq	%rax, 72(%rsp)
	movq	$0, 56(%rsp)
	jmp	.L2
.L3:
	movq	56(%rsp), %rax
	leaq	0(,%rax,8), %rdx
	leaq	80(%rsp), %rax
	addq	%rax, %rdx
	movabsq	$4607182418800017408, %rax
	movq	%rax, (%rdx)
	addq	$1, 56(%rsp)
.L2:
	movq	56(%rsp), %rax
	cmpq	$3, %rax
	jbe	.L3
	jmp	.L4
.L6:
	movq	64(%rsp), %rax
	leaq	8(%rax), %rdx
	movq	%rdx, 64(%rsp)
	movsd	(%rax), %xmm0
	movsd	72(%rsp), %xmm1
	mulsd	%xmm1, %xmm0
	movsd	%xmm0, 72(%rsp)
	subl	$1, 52(%rsp)
.L4:
	movq	64(%rsp), %rax
	andl	$31, %eax
	testq	%rax, %rax
	je	.L5
	cmpl	$0, 52(%rsp)
	jne	.L6
.L5:
	jmp	.L7
.L8:
	movq	64(%rsp), %rax
	movq	(%rax), %rdx
	movq	%rdx, 112(%rsp)
	movq	8(%rax), %rdx
	movq	%rdx, 120(%rsp)
	movq	16(%rax), %rdx
	movq	%rdx, 128(%rsp)
	movq	24(%rax), %rax
	movq	%rax, 136(%rsp)
	movq	80(%rsp), %rax
	movq	%rax, 144(%rsp)
	movq	88(%rsp), %rax
	movq	%rax, 152(%rsp)
	movq	96(%rsp), %rax
	movq	%rax, 160(%rsp)
	movq	104(%rsp), %rax
	movq	%rax, 168(%rsp)
	movapd	144(%rsp), %xmm1
	movapd	112(%rsp), %xmm0
	mulpd	%xmm0, %xmm1
	movapd	160(%rsp), %xmm2
	movapd	128(%rsp), %xmm0
	mulpd	%xmm2, %xmm0
	movapd	%xmm1, (%rsp)
	movapd	%xmm0, 16(%rsp)
	movq	(%rsp), %rax
	movq	%rax, 176(%rsp)
	movq	8(%rsp), %rax
	movq	%rax, 184(%rsp)
	movq	16(%rsp), %rax
	movq	%rax, 192(%rsp)
	movq	24(%rsp), %rax
	movq	%rax, 200(%rsp)
	movq	176(%rsp), %rax
	movq	%rax, 80(%rsp)
	movq	184(%rsp), %rax
	movq	%rax, 88(%rsp)
	movq	192(%rsp), %rax
	movq	%rax, 96(%rsp)
	movq	200(%rsp), %rax
	movq	%rax, 104(%rsp)
	addq	$32, 64(%rsp)
	movl	52(%rsp), %eax
	subl	$4, %eax
	movl	%eax, 52(%rsp)
.L7:
	movl	52(%rsp), %eax
	cmpl	$3, %eax
	ja	.L8
	jmp	.L9
.L10:
	movq	64(%rsp), %rax
	leaq	8(%rax), %rdx
	movq	%rdx, 64(%rsp)
	movsd	(%rax), %xmm0
	movsd	72(%rsp), %xmm1
	mulsd	%xmm1, %xmm0
	movsd	%xmm0, 72(%rsp)
	subl	$1, 52(%rsp)
.L9:
	cmpl	$0, 52(%rsp)
	jne	.L10
	movq	$0, 56(%rsp)
	jmp	.L11
.L12:
	movq	56(%rsp), %rax
	leaq	0(,%rax,8), %rdx
	leaq	80(%rsp), %rax
	addq	%rdx, %rax
	movsd	(%rax), %xmm0
	movsd	72(%rsp), %xmm1
	mulsd	%xmm1, %xmm0
	movsd	%xmm0, 72(%rsp)
	addq	$1, 56(%rsp)
.L11:
	movq	56(%rsp), %rax
	cmpq	$3, %rax
	jbe	.L12
	movq	32(%rsp), %rdx
	movq	72(%rsp), %rax
	movq	%rax, (%rdx)
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	simd_v1_combine, .-simd_v1_combine
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$10, %edi
	call	new_vec
	movq	%rax, -8(%rbp)
	leaq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	simd_v1_combine
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
