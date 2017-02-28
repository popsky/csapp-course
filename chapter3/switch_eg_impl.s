	.file	"switch_eg_impl.c"
	.text
	.globl	switch_eg_impl
	.type	switch_eg_impl, @function
switch_eg_impl:
.LFB24:
	.cfi_startproc
	subq	$100, %rsi
	cmpq	$6, %rsi
	ja	.L2
	jmp	*jt.2386(,%rsi,8)
.L3:
	leaq	(%rdi,%rdi,2), %rax
	leaq	(%rdi,%rax,4), %rdi
	jmp	.L4
.L5:
	addq	$10, %rdi
.L6:
	addq	$11, %rdi
	jmp	.L4
.L7:
	imulq	%rdi, %rdi
	jmp	.L4
.L2:
	movl	$0, %edi
.L4:
	movq	%rdi, (%rdx)
	ret
	.cfi_endproc
.LFE24:
	.size	switch_eg_impl, .-switch_eg_impl
	.section	.rodata
	.align 32
	.type	jt.2386, @object
	.size	jt.2386, 56
jt.2386:
	.quad	.L3
	.quad	.L2
	.quad	.L5
	.quad	.L6
	.quad	.L7
	.quad	.L2
	.quad	.L7
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
