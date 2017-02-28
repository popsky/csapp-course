	.file	"simd_r4_combine.c"
	.text
	.globl	simd_r4_combine
	.type	simd_r4_combine, @function
simd_r4_combine:
.LFB24:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r13
	pushq	%r12
	pushq	%rbx
	andq	$-32, %rsp
	subq	$368, %rsp
	.cfi_offset 13, -24
	.cfi_offset 12, -32
	.cfi_offset 3, -40
	movq	%rdi, %r13
	movq	%rsi, %r12
	call	get_vec_start
	movq	%rax, %rbx
	movq	%r13, %rdi
	call	vec_length
	movsd	.LC0(%rip), %xmm0
	movsd	%xmm0, 72(%rsp)
	movsd	%xmm0, 64(%rsp)
	movsd	%xmm0, 56(%rsp)
	movsd	%xmm0, 48(%rsp)
	jmp	.L2
.L4:
	movsd	(%rbx), %xmm0
	mulsd	48(%rsp), %xmm0
	movsd	%xmm0, 48(%rsp)
	subl	$1, %eax
	leaq	8(%rbx), %rbx
.L2:
	testb	$31, %bl
	je	.L10
	testl	%eax, %eax
	jne	.L4
	jmp	.L10
.L5:
	movq	(%rbx), %rdx
	movq	%rdx, 80(%rsp)
	movq	8(%rbx), %rdx
	movq	%rdx, 88(%rsp)
	movq	16(%rbx), %rdx
	movq	%rdx, 96(%rsp)
	movq	24(%rbx), %rdx
	movq	%rdx, 104(%rsp)
	movq	128(%rbx), %rdx
	movq	%rdx, 112(%rsp)
	movq	136(%rbx), %rdx
	movq	%rdx, 120(%rsp)
	movq	144(%rbx), %rdx
	movq	%rdx, 128(%rsp)
	movq	152(%rbx), %rdx
	movq	%rdx, 136(%rsp)
	movq	256(%rbx), %rdx
	movq	%rdx, 144(%rsp)
	movq	264(%rbx), %rdx
	movq	%rdx, 152(%rsp)
	movq	272(%rbx), %rdx
	movq	%rdx, 160(%rsp)
	movq	280(%rbx), %rdx
	movq	%rdx, 168(%rsp)
	movq	384(%rbx), %rdx
	movq	%rdx, 176(%rsp)
	movq	392(%rbx), %rdx
	movq	%rdx, 184(%rsp)
	movq	400(%rbx), %rdx
	movq	%rdx, 192(%rsp)
	movq	408(%rbx), %rdx
	movq	%rdx, 200(%rsp)
	movq	48(%rsp), %rdx
	movq	%rdx, 208(%rsp)
	movq	56(%rsp), %rdx
	movq	%rdx, 216(%rsp)
	movq	64(%rsp), %rdx
	movq	%rdx, 224(%rsp)
	movq	72(%rsp), %rdx
	movq	%rdx, 232(%rsp)
	movapd	208(%rsp), %xmm0
	mulpd	80(%rsp), %xmm0
	movapd	%xmm0, (%rsp)
	movq	(%rsp), %rcx
	movapd	%xmm0, 16(%rsp)
	movapd	224(%rsp), %xmm0
	mulpd	96(%rsp), %xmm0
	movapd	%xmm0, (%rsp)
	movq	(%rsp), %rdx
	movapd	%xmm0, 32(%rsp)
	movq	%rcx, 240(%rsp)
	movq	24(%rsp), %rcx
	movq	%rcx, 248(%rsp)
	movq	%rdx, 256(%rsp)
	movq	40(%rsp), %rdx
	movq	%rdx, 264(%rsp)
	movapd	112(%rsp), %xmm0
	mulpd	144(%rsp), %xmm0
	movapd	%xmm0, (%rsp)
	movq	(%rsp), %rcx
	movapd	%xmm0, 16(%rsp)
	movapd	128(%rsp), %xmm0
	mulpd	160(%rsp), %xmm0
	movapd	%xmm0, (%rsp)
	movq	(%rsp), %rdx
	movapd	%xmm0, 32(%rsp)
	movq	%rcx, 272(%rsp)
	movq	24(%rsp), %rcx
	movq	%rcx, 280(%rsp)
	movq	%rdx, 288(%rsp)
	movq	40(%rsp), %rdx
	movq	%rdx, 296(%rsp)
	movapd	240(%rsp), %xmm0
	mulpd	272(%rsp), %xmm0
	movapd	%xmm0, (%rsp)
	movq	(%rsp), %rcx
	movapd	%xmm0, 16(%rsp)
	movapd	256(%rsp), %xmm0
	mulpd	288(%rsp), %xmm0
	movapd	%xmm0, (%rsp)
	movq	(%rsp), %rdx
	movapd	%xmm0, 32(%rsp)
	movq	%rcx, 304(%rsp)
	movq	24(%rsp), %rcx
	movq	%rcx, 312(%rsp)
	movq	%rdx, 320(%rsp)
	movq	40(%rsp), %rdx
	movq	%rdx, 328(%rsp)
	movapd	304(%rsp), %xmm0
	mulpd	176(%rsp), %xmm0
	movapd	%xmm0, (%rsp)
	movq	(%rsp), %rdi
	movapd	%xmm0, 16(%rsp)
	movapd	320(%rsp), %xmm0
	mulpd	192(%rsp), %xmm0
	movapd	%xmm0, (%rsp)
	movq	(%rsp), %rcx
	movapd	%xmm0, 32(%rsp)
	movq	%rdi, 336(%rsp)
	movq	24(%rsp), %rsi
	movq	%rsi, 344(%rsp)
	movq	%rcx, 352(%rsp)
	movq	40(%rsp), %rdx
	movq	%rdx, 360(%rsp)
	movq	%rdi, 48(%rsp)
	movq	%rsi, 56(%rsp)
	movq	%rcx, 64(%rsp)
	movq	%rdx, 72(%rsp)
	subq	$-128, %rbx
	subl	$16, %eax
.L10:
	cmpl	$15, %eax
	jg	.L5
	jmp	.L11
.L7:
	movsd	(%rbx), %xmm0
	mulsd	48(%rsp), %xmm0
	movsd	%xmm0, 48(%rsp)
	subl	$1, %eax
	leaq	8(%rbx), %rbx
.L11:
	testl	%eax, %eax
	jne	.L7
	movl	$1, %eax
	jmp	.L8
.L9:
	movsd	48(%rsp,%rax,8), %xmm0
	mulsd	48(%rsp), %xmm0
	movsd	%xmm0, 48(%rsp)
	addq	$1, %rax
.L8:
	cmpq	$3, %rax
	jbe	.L9
	movsd	48(%rsp), %xmm0
	movsd	%xmm0, (%r12)
	leaq	-24(%rbp), %rsp
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE24:
	.size	simd_r4_combine, .-simd_r4_combine
	.section	.rodata.cst8,"aM",@progbits,8
	.align 8
.LC0:
	.long	0
	.long	1072693248
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
