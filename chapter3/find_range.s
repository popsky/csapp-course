	.file	"find_range.c"
	.text
	.p2align 4,,15
	.globl	find_range
	.type	find_range, @function
find_range:
.LFB24:
	.cfi_startproc
	xorps	%xmm1, %xmm1
	ucomiss	%xmm0, %xmm1
	ja	.L5
	ucomiss	%xmm1, %xmm0
	jnp	.L11
.L8:
	xorl	%eax, %eax
	ucomiss	%xmm1, %xmm0
	setbe	%al
	addl	$2, %eax
	ret
	.p2align 4,,10
	.p2align 3
.L11:
	movl	$1, %eax
	jne	.L8
	rep ret
	.p2align 4,,10
	.p2align 3
.L5:
	xorl	%eax, %eax
	ret
	.cfi_endproc
.LFE24:
	.size	find_range, .-find_range
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
