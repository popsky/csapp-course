	.file	"tmult_ok.c"
	.text
	.globl	tmult_ok_asm
	.type	tmult_ok_asm, @function
tmult_ok_asm:
.LFB24:
	.cfi_startproc
	imulq	%rdi, %rsi
	movq	%rsi, (%rdx)
# Inserted code
	setae %al
# End of inserted code
	movzbl	%al, %eax
	ret
	.cfi_endproc
.LFE24:
	.size	tmult_ok_asm, .-tmult_ok_asm
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
