	.file	"5.8.c"
	.text
	.globl	aprog
	.type	aprog, @function
aprog:
.LFB24:
	.cfi_startproc
	movsd	.LC0(%rip), %xmm0
	movl	$0, %eax
	leaq	-2(%rsi), %rdx
	jmp	.L2
.L3:
	movsd	16(%rdi,%rax,8), %xmm1
	mulsd	8(%rdi,%rax,8), %xmm1
	mulsd	(%rdi,%rax,8), %xmm1
	mulsd	%xmm1, %xmm0
	addq	$3, %rax
.L2:
	cmpq	%rax, %rdx
	jg	.L3
	jmp	.L6
.L5:
	mulsd	(%rdi,%rax,8), %xmm0
	addq	$1, %rax
.L6:
	cmpq	%rsi, %rax
	jl	.L5
	rep ret
	.cfi_endproc
.LFE24:
	.size	aprog, .-aprog
	.section	.rodata.cst8,"aM",@progbits,8
	.align 8
.LC0:
	.long	0
	.long	1072693248
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
