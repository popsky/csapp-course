	.file	"pp2.c"
	.text
	.globl	umult_full
	.type	umult_full, @function
umult_full:
.LFB24:
	.cfi_startproc
	movq	%rdx, %rcx
#APP
# 12 "pp2.c" 1
	movq	%rsi, %rax		# Convert x to 128bit
	xorq	%rdx, %rdx		# Set the high-order eight bytes to 0x0
	mulq	%rdi			# 128-bit unsigned long mutiply by y
	movq	%rax, (%rcx)		# Store low-order eight bytes to dest[0]
	movq	%rdx, 8(%rcx)		# Store high-order eight bytes to dest[1]
# 0 "" 2
#NO_APP
	ret
	.cfi_endproc
.LFE24:
	.size	umult_full, .-umult_full
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
