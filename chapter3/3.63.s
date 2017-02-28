	.file	"3.63.c"
	.text
	.globl	switch_prob
	.type	switch_prob, @function
switch_prob:
.LFB24:
	.cfi_startproc
	subq	$60, %rsi
	cmpq	$5, %rsi
	ja	.L2
	jmp	*.L4(,%rsi,8)
	.section	.rodata
	.align 8
	.align 4
.L4:
	.quad	.L3
	.quad	.L2
	.quad	.L3
	.quad	.L5
	.quad	.L6
	.quad	.L7
	.text
.L3:
	leaq	0(,%rdi,8), %rax
	ret
.L5:
	movq	%rdi, %rax
	shrq	$3, %rax
	ret
.L6:
	movq	%rdi, %rax
	salq	$4, %rax
	subq	%rdi, %rax
	movq	%rax, %rdi
.L7:
	imulq	%rdi, %rdi
.L2:
	leaq	75(%rdi), %rax
	ret
	.cfi_endproc
.LFE24:
	.size	switch_prob, .-switch_prob
	.globl	main
	.type	main, @function
main:
.LFB25:
	.cfi_startproc
	rep ret
	.cfi_endproc
.LFE25:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
