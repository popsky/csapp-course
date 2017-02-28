	.file	"3.57.c"
	.text
	.globl	funct3
	.type	funct3, @function
funct3:
.LFB24:
	.cfi_startproc
	movss	(%rdx), %xmm1
	cvtsi2sd	(%rdi), %xmm2
	ucomisd	%xmm0, %xmm2
	jb	.L6
	addss	%xmm1, %xmm1
	cvtsi2ssq	%rsi, %xmm0
	addss	%xmm0, %xmm1
	unpcklps	%xmm1, %xmm1
	cvtps2pd	%xmm1, %xmm0
	ret
.L6:
	cvtsi2ssq	%rsi, %xmm0
	mulss	%xmm0, %xmm1
	unpcklps	%xmm1, %xmm1
	cvtps2pd	%xmm1, %xmm0
	ret
	.cfi_endproc
.LFE24:
	.size	funct3, .-funct3
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
