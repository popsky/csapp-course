	.file	"tmult_ok2.c"
	.text
	.globl	tmult_ok2
	.type	tmult_ok2, @function
tmult_ok2:
.LFB24:
	.cfi_startproc
	pushq	%rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	imulq	%rsi, %rdi
	movq	%rdi, (%rdx)
#APP
# 13 "tmult_ok2.c" 1
	setae %bl				# Set low-order byte 
	movzbl %bl,%eax		# Zero extend to be result
# 0 "" 2
#NO_APP
	popq	%rbx
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE24:
	.size	tmult_ok2, .-tmult_ok2
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
