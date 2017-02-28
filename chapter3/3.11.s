	.file	"3.11.c"
	.text
	.globl	exclusive_or
	.type	exclusive_or, @function
exclusive_or:
.LFB24:
	.cfi_startproc
	xorq %rdx,%rdx
	movq $0,%rax 
	xorl %edx,%edx
	movl $0,%eax
	ret
	.cfi_endproc
.LFE24:
	.size	exclusive_or, .-exclusive_or
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
