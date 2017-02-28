	.file	"3.31.c"
	.text
	.globl	switcher
	.type	switcher, @function
switcher:
.LFB24:
	.cfi_startproc
	cmpq	$7, %rdi
	ja	.L8
	jmp	*.L4(,%rdi,8)
	.section	.rodata
	.align 8
	.align 4
.L4:
	.quad	.L3
	.quad	.L8
	.quad	.L5
	.quad	.L8
	.quad	.L2
	.quad	.L7
	.quad	.L8
	.quad	.L5
	.text
.L7:
	xorq	$15, %rsi
	movq	%rsi, %rdx
.L3:
	leaq	112(%rdx), %rdi
	jmp	.L2
.L5:
	leaq	(%rdx,%rsi), %rdi
	salq	$2, %rdi
	jmp	.L2
.L8:
	movq	%rsi, %rdi
.L2:
	movq	%rdi, (%rcx)
	ret
	.cfi_endproc
.LFE24:
	.size	switcher, .-switcher
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
