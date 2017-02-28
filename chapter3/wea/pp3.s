	.file	"pp3.c"
	.text
	.globl	bad_incr
	.type	bad_incr, @function
bad_incr:
.LFB24:
	.cfi_startproc
	addl	$1, (%rdi)
	ret
	.cfi_endproc
.LFE24:
	.size	bad_incr, .-bad_incr
	.globl	lock_incr
	.type	lock_incr, @function
lock_incr:
.LFB25:
	.cfi_startproc
#APP
# 14 "pp3.c" 1
	lock			# Atomic perfome addl insruction
	addl $1,(%rdi)	# Increse value by 1
# 0 "" 2
#NO_APP
	ret
	.cfi_endproc
.LFE25:
	.size	lock_incr, .-lock_incr
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
