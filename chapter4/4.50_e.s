	.file	"4.50_e.c"
	.text
	.p2align 4,,15
	.globl	switchv
	.type	switchv, @function
switchv:
.LFB24:
	.cfi_startproc
	cmpq	$5, %rdi
	movl	$3549, %eax
	ja	.L2
	movq	CSWTCH.1(,%rdi,8), %rax
.L2:
	rep ret
	.cfi_endproc
.LFE24:
	.size	switchv, .-switchv
	.section	.rodata
	.align 32
	.type	CSWTCH.1, @object
	.size	CSWTCH.1, 48
CSWTCH.1:
	.quad	2730
	.quad	3549
	.quad	3003
	.quad	3276
	.quad	3549
	.quad	3003
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
