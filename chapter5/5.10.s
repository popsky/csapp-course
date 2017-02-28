	.file	"5.10.c"
	.text
	.globl	copy_array
	.type	copy_array, @function
copy_array:
.LFB24:
	.cfi_startproc
	movl	$0, %eax
	jmp	.L2
.L3:
	movq	(%rdi,%rax,8), %rcx
	movq	%rcx, (%rsi,%rax,8)
	addq	$1, %rax
.L2:
	cmpq	%rdx, %rax
	jl	.L3
	rep ret
	.cfi_endproc
.LFE24:
	.size	copy_array, .-copy_array
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
