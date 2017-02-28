	.file	"umult_ok2.c"
	.text
	.globl	umult_ok
	.type	umult_ok, @function
umult_ok:
.LFB24:
	.cfi_startproc
	movq	%rdx, %rcx
#APP
# 12 "umult_ok2.c" 1
	movq %rdi,%rax		# Get x
	mulq %rsi				# Unsigned long multiply by y
	movq %rax,(%rcx)		# Store low-order 8 bytes at dest
	setae %dil				# Set result
# 0 "" 2
#NO_APP
	movzbl	%dil, %eax
	ret
	.cfi_endproc
.LFE24:
	.size	umult_ok, .-umult_ok
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
