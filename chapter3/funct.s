	.file	"funct.c"
	.text
	.globl	funct
	.type	funct, @function
funct:
.LFB24:
	.cfi_startproc
	unpcklps	%xmm1, %xmm1
	cvtps2pd	%xmm1, %xmm1
	mulsd	%xmm1, %xmm0
	cvtsi2sd	%edi, %xmm1
	divsd	%xmm1, %xmm2
	subsd	%xmm2, %xmm0
	ret
	.cfi_endproc
.LFE24:
	.size	funct, .-funct
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
