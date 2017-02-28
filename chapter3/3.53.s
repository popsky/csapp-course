	.file	"3.53.c"
	.text
	.globl	funct1
	.type	funct1, @function
funct1:
.LFB24:
	.cfi_startproc
	cvtsi2ssq	%rsi, %xmm2
	addss	%xmm0, %xmm2
	cvtsi2ss	%edi, %xmm0
	divss	%xmm2, %xmm0
	unpcklps	%xmm0, %xmm0
	cvtps2pd	%xmm0, %xmm0
	subsd	%xmm1, %xmm0
	ret
	.cfi_endproc
.LFE24:
	.size	funct1, .-funct1
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
