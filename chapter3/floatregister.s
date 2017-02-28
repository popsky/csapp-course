	.file	"floatregister.c"
	.text
	.globl	float_mov
	.type	float_mov, @function
float_mov:
.LFB24:
	.cfi_startproc
	movaps	%xmm0, %xmm1
	movss	(%rdi), %xmm0
	movss	%xmm1, (%rsi)
	ret
	.cfi_endproc
.LFE24:
	.size	float_mov, .-float_mov
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
