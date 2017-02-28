	.file	"simd_v4_combine.c"
	.text
	.globl	simd_vn_combine
	.type	simd_vn_combine, @function
simd_vn_combine:
.LFB0:
	.cfi_startproc
	leaq	8(%rsp), %r10
	.cfi_def_cfa 10, 0
	andq	$-32, %rsp
	pushq	-8(%r10)
	pushq	%rbp
	.cfi_escape 0x10,0x6,0x2,0x76,0
	movq	%rsp, %rbp
	pushq	%r12
	pushq	%r10
	.cfi_escape 0xf,0x3,0x76,0x70,0x6
	.cfi_escape 0x10,0xc,0x2,0x76,0x78
	pushq	%rbx
	subq	$296, %rsp
	.cfi_escape 0x10,0x3,0x2,0x76,0x68
	movq	%rdi, -248(%rbp)
	movq	%rsi, -256(%rbp)
	movq	%rdx, -264(%rbp)
	movq	%rsp, %rax
	movq	%rax, %r12
	movq	-264(%rbp), %rax
	movq	%rax, %rdx
	subq	$1, %rdx
	movq	%rdx, -192(%rbp)
	movq	%rax, %r8
	movl	$0, %r9d
	movq	%rax, %rcx
	movl	$0, %ebx
	salq	$5, %rax
	leaq	31(%rax), %rdx
	movl	$16, %eax
	subq	$1, %rax
	addq	%rdx, %rax
	movl	$16, %ebx
	movl	$0, %edx
	divq	%rbx
	imulq	$16, %rax, %rax
	subq	%rax, %rsp
	movq	%rsp, %rax
	addq	$31, %rax
	shrq	$5, %rax
	salq	$5, %rax
	movq	%rax, -184(%rbp)
	movq	-248(%rbp), %rax
	movq	%rax, %rdi
	call	get_vec_start
	movq	%rax, -208(%rbp)
	movq	-248(%rbp), %rax
	movq	%rax, %rdi
	call	vec_length
	movl	%eax, -232(%rbp)
	movabsq	$4607182418800017408, %rax
	movq	%rax, -200(%rbp)
	movq	-264(%rbp), %rax
	salq	$5, %rax
	shrq	$3, %rax
	movl	%eax, -228(%rbp)
	movq	$0, -224(%rbp)
	jmp	.L2
.L3:
	movq	-184(%rbp), %rax
	movq	-224(%rbp), %rdx
	salq	$3, %rdx
	addq	%rax, %rdx
	movabsq	$4607182418800017408, %rax
	movq	%rax, (%rdx)
	addq	$1, -224(%rbp)
.L2:
	movq	-224(%rbp), %rax
	cmpq	$3, %rax
	jbe	.L3
	movq	$1, -224(%rbp)
	jmp	.L4
.L5:
	movq	-184(%rbp), %rax
	movq	(%rax), %rdx
	movq	%rdx, -176(%rbp)
	movq	8(%rax), %rdx
	movq	%rdx, -168(%rbp)
	movq	16(%rax), %rdx
	movq	%rdx, -160(%rbp)
	movq	24(%rax), %rax
	movq	%rax, -152(%rbp)
	movq	-184(%rbp), %rax
	movq	-224(%rbp), %rdx
	salq	$5, %rdx
	addq	%rdx, %rax
	movq	-176(%rbp), %rdx
	movq	%rdx, (%rax)
	movq	-168(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	-160(%rbp), %rdx
	movq	%rdx, 16(%rax)
	movq	-152(%rbp), %rdx
	movq	%rdx, 24(%rax)
	addq	$1, -224(%rbp)
.L4:
	movq	-224(%rbp), %rax
	cmpq	-264(%rbp), %rax
	jb	.L5
	jmp	.L6
.L8:
	movq	-208(%rbp), %rax
	leaq	8(%rax), %rdx
	movq	%rdx, -208(%rbp)
	movsd	(%rax), %xmm0
	movsd	-200(%rbp), %xmm1
	mulsd	%xmm1, %xmm0
	movsd	%xmm0, -200(%rbp)
	subl	$1, -232(%rbp)
.L6:
	movq	-208(%rbp), %rax
	andl	$31, %eax
	testq	%rax, %rax
	je	.L7
	cmpl	$0, -232(%rbp)
	jne	.L8
.L7:
	jmp	.L9
.L12:
	movq	$0, -224(%rbp)
	jmp	.L10
.L11:
	movq	-224(%rbp), %rax
	salq	$5, %rax
	shrq	$3, %rax
	leaq	0(,%rax,8), %rdx
	movq	-208(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movq	%rdx, -144(%rbp)
	movq	8(%rax), %rdx
	movq	%rdx, -136(%rbp)
	movq	16(%rax), %rdx
	movq	%rdx, -128(%rbp)
	movq	24(%rax), %rax
	movq	%rax, -120(%rbp)
	movq	-184(%rbp), %rax
	movq	-224(%rbp), %rdx
	salq	$5, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movq	%rdx, -112(%rbp)
	movq	8(%rax), %rdx
	movq	%rdx, -104(%rbp)
	movq	16(%rax), %rdx
	movq	%rdx, -96(%rbp)
	movq	24(%rax), %rax
	movq	%rax, -88(%rbp)
	movapd	-112(%rbp), %xmm1
	movapd	-144(%rbp), %xmm0
	mulpd	%xmm0, %xmm1
	movapd	-96(%rbp), %xmm2
	movapd	-128(%rbp), %xmm0
	mulpd	%xmm2, %xmm0
	movapd	%xmm1, -304(%rbp)
	movapd	%xmm0, -288(%rbp)
	movq	-304(%rbp), %rax
	movq	%rax, -80(%rbp)
	movq	-296(%rbp), %rax
	movq	%rax, -72(%rbp)
	movq	-288(%rbp), %rax
	movq	%rax, -64(%rbp)
	movq	-280(%rbp), %rax
	movq	%rax, -56(%rbp)
	movq	-184(%rbp), %rax
	movq	-224(%rbp), %rdx
	salq	$5, %rdx
	addq	%rdx, %rax
	movq	-80(%rbp), %rdx
	movq	%rdx, (%rax)
	movq	-72(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	-64(%rbp), %rdx
	movq	%rdx, 16(%rax)
	movq	-56(%rbp), %rdx
	movq	%rdx, 24(%rax)
	addq	$1, -224(%rbp)
.L10:
	movq	-224(%rbp), %rax
	cmpq	-264(%rbp), %rax
	jb	.L11
	movl	-228(%rbp), %eax
	cltq
	salq	$3, %rax
	addq	%rax, -208(%rbp)
	movl	-228(%rbp), %eax
	subl	%eax, -232(%rbp)
.L9:
	movl	-232(%rbp), %eax
	cmpl	-228(%rbp), %eax
	jge	.L12
	jmp	.L13
.L14:
	movq	-208(%rbp), %rax
	leaq	8(%rax), %rdx
	movq	%rdx, -208(%rbp)
	movsd	(%rax), %xmm0
	movsd	-200(%rbp), %xmm1
	mulsd	%xmm1, %xmm0
	movsd	%xmm0, -200(%rbp)
	subl	$1, -232(%rbp)
.L13:
	cmpl	$0, -232(%rbp)
	jne	.L14
	movq	$0, -224(%rbp)
	jmp	.L15
.L18:
	movq	$0, -216(%rbp)
	jmp	.L16
.L17:
	movq	-224(%rbp), %rax
	salq	$5, %rax
	movq	%rax, %rdx
	movq	-184(%rbp), %rax
	addq	%rax, %rdx
	movq	-216(%rbp), %rax
	salq	$3, %rax
	addq	%rdx, %rax
	movsd	(%rax), %xmm0
	movsd	-200(%rbp), %xmm1
	mulsd	%xmm1, %xmm0
	movsd	%xmm0, -200(%rbp)
	addq	$1, -216(%rbp)
.L16:
	movq	-216(%rbp), %rax
	cmpq	$3, %rax
	jbe	.L17
	addq	$1, -224(%rbp)
.L15:
	movq	-224(%rbp), %rax
	cmpq	-264(%rbp), %rax
	jb	.L18
	movq	-256(%rbp), %rdx
	movq	-200(%rbp), %rax
	movq	%rax, (%rdx)
	movq	%r12, %rsp
	movq	%rax, -312(%rbp)
	movsd	-312(%rbp), %xmm0
	leaq	-24(%rbp), %rsp
	popq	%rbx
	popq	%r10
	.cfi_def_cfa 10, 0
	popq	%r12
	popq	%rbp
	leaq	-8(%r10), %rsp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	simd_vn_combine, .-simd_vn_combine
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
