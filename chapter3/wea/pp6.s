	.file	"pp6.c"
	.text
	.globl	dsqrt
	.type	dsqrt, @function
dsqrt:
.LFB24:
	.cfi_startproc
#APP
# 11 "pp6.c" 1
	sqrtsd %xmm0, %xmm0	# Floating-point square root
	ret
# 0 "" 2
#NO_APP
	ret
	.cfi_endproc
.LFE24:
	.size	dsqrt, .-dsqrt
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
