	.file	"3.75.c"
	.text
	.globl	c_imag
	.type	c_imag, @function
c_imag:
.LFB24:
	.cfi_startproc
	movapd	%xmm1, %xmm0
	ret
	.cfi_endproc
.LFE24:
	.size	c_imag, .-c_imag
	.globl	c_real
	.type	c_real, @function
c_real:
.LFB25:
	.cfi_startproc
	rep ret
	.cfi_endproc
.LFE25:
	.size	c_real, .-c_real
	.globl	c_sub
	.type	c_sub, @function
c_sub:
.LFB26:
	.cfi_startproc
	subsd	%xmm2, %xmm0
	subsd	%xmm3, %xmm1
	ret
	.cfi_endproc
.LFE26:
	.size	c_sub, .-c_sub
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
