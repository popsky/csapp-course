	.file	"3.54.c"
	.text
	.globl	funct2
	.type	funct2, @function
funct2:
.LFB24:
	.cfi_startproc
	cvtsi2ss	%edi, %xmm2
	mulss	%xmm2, %xmm1
	unpcklps	%xmm1, %xmm1
	cvtps2pd	%xmm1, %xmm2
	cvtsi2sdq	%rsi, %xmm1
	movapd	%xmm0, %xmm3
	divsd	%xmm1, %xmm3
	subsd	%xmm3, %xmm2
	movapd	%xmm2, %xmm0
	ret
	.cfi_endproc
.LFE24:
	.size	funct2, .-funct2
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
