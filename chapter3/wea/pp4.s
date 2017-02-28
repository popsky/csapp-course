	.file	"pp4.c"
	.text
	.globl	odd_parity
	.type	odd_parity, @function
odd_parity:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L2
.L3:
	movq	-24(%rbp), %rax
	movb	%al, -6(%rbp)
	movzbl	-6(%rbp), %eax
#APP
# 14 "pp4.c" 1
	testb %al,%al		# Test value of low-order byte
	setnp %al				#Set if odd parity
# 0 "" 2
#NO_APP
	movb	%al, -5(%rbp)
	movsbl	-5(%rbp), %eax
	xorl	%eax, -4(%rbp)
	shrq	$8, -24(%rbp)
.L2:
	cmpq	$0, -24(%rbp)
	jne	.L3
	movl	-4(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	odd_parity, .-odd_parity
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
