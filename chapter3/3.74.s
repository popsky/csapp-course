	.file	"3.74.c"
	.text
	.globl	find_range3
	.type	find_range3, @function
find_range3:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movss	%xmm0, -36(%rbp)
	movl	$0, -20(%rbp)
	movl	$1, -16(%rbp)
	movl	$2, -12(%rbp)
	movl	$3, -8(%rbp)
	movss	-36(%rbp), %xmm0
	movl	-20(%rbp), %eax
	movl	-16(%rbp), %edx
	movl	-12(%rbp), %ecx
	movl	-8(%rbp), %esi
#APP
# 19 "3.74.c" 1
	xorps		%xmm1, %xmm1	# Set %xmm1 to 0
	ucomiss	%xmm0, %xmm1	# Compare 0:f
	movl %eax, %eax			# 
	cmove %edx, %eax				# Move 1 if f=0
	cmovb %ecx, %eax				# Move 2 if f>0
	cmovp %esi, %eax				# Move 3 if f is NaN
	
# 0 "" 2
#NO_APP
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	find_range3, .-find_range3
	.section	.rodata
	.align 8
.LC0:
	.string	"err of x = %x ,find_range=%d,find_range2=%d\n"
.LC1:
	.string	"test ok!"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movl	$0, -28(%rbp)
	leaq	-28(%rbp), %rax
	movq	%rax, -24(%rbp)
.L6:
	movq	-24(%rbp), %rax
	movss	(%rax), %xmm0
	unpcklps	%xmm0, %xmm0
	cvtps2pd	%xmm0, %xmm0
	movl	$1, %eax
	call	find_range
	movl	%eax, %ebx
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -36(%rbp)
	movss	-36(%rbp), %xmm0
	call	find_range3
	cmpl	%eax, %ebx
	je	.L4
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -36(%rbp)
	movss	-36(%rbp), %xmm0
	call	find_range3
	movl	%eax, %ebx
	movq	-24(%rbp), %rax
	movss	(%rax), %xmm0
	unpcklps	%xmm0, %xmm0
	cvtps2pd	%xmm0, %xmm0
	movl	$1, %eax
	call	find_range
	movl	%eax, %edx
	movl	-28(%rbp), %eax
	movl	%ebx, %ecx
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movl	$-1, %eax
	jmp	.L3
.L4:
	movl	-28(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	testl	%eax, %eax
	jne	.L6
	movl	$.LC1, %edi
	call	puts
.L3:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
