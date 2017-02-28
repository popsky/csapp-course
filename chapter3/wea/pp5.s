	.file	"pp5.c"
	.text
	.globl	dmin
	.type	dmin, @function
dmin:
.LFB24:
	.cfi_startproc
	movsd	%xmm1, -8(%rsp)
	movq	-8(%rsp), %rax
#APP
# 11 "pp5.c" 1
	minsd %rax,%xmm0		# Determine the minimun
# 0 "" 2
#NO_APP
	ret
	.cfi_endproc
.LFE24:
	.size	dmin, .-dmin
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC2:
	.string	"dmin(100.5,62.5)=%\fn"
	.text
	.globl	main
	.type	main, @function
main:
.LFB25:
	.cfi_startproc
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	movsd	.LC0(%rip), %xmm1
	movsd	.LC1(%rip), %xmm0
	call	dmin
	movl	$.LC2, %esi
	movl	$1, %edi
	movl	$1, %eax
	call	__printf_chk
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE25:
	.size	main, .-main
	.section	.rodata.cst8,"aM",@progbits,8
	.align 8
.LC0:
	.long	0
	.long	1078935552
	.align 8
.LC1:
	.long	0
	.long	1079582720
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
