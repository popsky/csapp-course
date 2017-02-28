	.file	"cmove_e.c"
	.text
	.p2align 4,,15
	.globl	absdiff
	.type	absdiff, @function
absdiff:
.LFB24:
	.cfi_startproc
	movl	%esi, %eax
	movl	%edi, %edx
	subl	%edi, %eax
	subl	%esi, %edx
	cmpl	%esi, %edi
	cmovge	%edx, %eax
	ret
	.cfi_endproc
.LFE24:
	.size	absdiff, .-absdiff
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
