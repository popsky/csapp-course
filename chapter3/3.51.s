	.file	"3.51.c"
	.text
	.globl	cvt
	.type	cvt, @function
cvt:
.LFB24:
	.cfi_startproc
	cvttss2siq	%xmm0, %rax
	ret
	.cfi_endproc
.LFE24:
	.size	cvt, .-cvt
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
