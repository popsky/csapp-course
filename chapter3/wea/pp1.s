	.file	"pp1.c"
	.text
	.globl	tmult_ok3
	.type	tmult_ok3, @function
tmult_ok3:
.LFB24:
	.cfi_startproc
#APP
# 11 "pp1.c" 1
	imulq %rdi, %rsi		# Compute x*y
	movq  %rsi, (%rdx)		# Store product on *dest
	setae %al				# Set bresult
# 0 "" 2
#NO_APP
	movzbl	%al, %eax
	ret
	.cfi_endproc
.LFE24:
	.size	tmult_ok3, .-tmult_ok3
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
