	.file	"ucom.c"
	.text
	.globl	m
	.type	m, @function
m:
.LFB14:
	.cfi_startproc
	movl	%edi, %eax
	subl	%esi, %eax
	ret
	.cfi_endproc
.LFE14:
	.size	m, .-m
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"1u - 2u = %u\n"
	.section	.text.startup,"ax",@progbits
	.globl	main
	.type	main, @function
main:
.LFB15:
	.cfi_startproc
	orl	$-1, %edx
	movl	$.LC0, %esi
	movl	$1, %edi
	xorl	%eax, %eax
	jmp	__printf_chk
	.cfi_endproc
.LFE15:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
