	.file	"3.50.c"
	.text
	.globl	fcvt2
	.type	fcvt2, @function
fcvt2:
.LFB24:
	.cfi_startproc
	movl	(%rdi), %eax
	movss	(%rsi), %xmm0
	cvttsd2si	(%rdx), %r8d
	movl	%r8d, (%rdi)
	cvtsi2ss	%eax, %xmm1
	movss	%xmm1, (%rsi)
	cvtsi2sdq	%rcx, %xmm1
	movsd	%xmm1, (%rdx)
	unpcklps	%xmm0, %xmm0
	cvtps2pd	%xmm0, %xmm0
	ret
	.cfi_endproc
.LFE24:
	.size	fcvt2, .-fcvt2
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
