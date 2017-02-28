	.file	"3.73.c"
	.text
	.globl	find_range2
	.type	find_range2, @function
find_range2:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movss	%xmm0, -20(%rbp)
	movss	-20(%rbp), %xmm0
#APP
# 16 "3.73.c" 1
	xorps %xmm1,%xmm1	# %xmm1 = 0
	ucomiss %xmm0, %xmm1	# Compare 0:x
	setp %al	
	setb %cl	
	sete %dl  
	
# 0 "" 2
#NO_APP
	movb	%cl, -7(%rbp)
	movb	%dl, -6(%rbp)
	movb	%al, -5(%rbp)
	movl	$0, -4(%rbp)
	cmpb	$0, -5(%rbp)
	je	.L2
	movl	$3, -4(%rbp)
.L2:
	cmpb	$0, -5(%rbp)
	jne	.L3
	cmpb	$0, -7(%rbp)
	je	.L3
	movl	$2, -4(%rbp)
.L3:
	cmpb	$0, -5(%rbp)
	jne	.L4
	cmpb	$0, -6(%rbp)
	je	.L4
	movl	$1, -4(%rbp)
.L4:
	movl	-4(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	find_range2, .-find_range2
	.section	.rodata
	.align 8
.LC0:
	.string	"err of x = %x ,find_range=%d,find_range2=%d\n"
.LC1:
	.string	"test ok!"
	.text
	.globl	man
	.type	man, @function
man:
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
.L9:
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -36(%rbp)
	movss	-36(%rbp), %xmm0
	call	find_range
	movl	%eax, %ebx
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -36(%rbp)
	movss	-36(%rbp), %xmm0
	call	find_range2
	cmpl	%eax, %ebx
	je	.L7
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -36(%rbp)
	movss	-36(%rbp), %xmm0
	call	find_range2
	movl	%eax, %ebx
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -36(%rbp)
	movss	-36(%rbp), %xmm0
	call	find_range
	movl	%eax, %edx
	movl	-28(%rbp), %eax
	movl	%ebx, %ecx
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movl	$-1, %eax
	jmp	.L6
.L7:
	movl	-28(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	testl	%eax, %eax
	jne	.L9
	movl	$.LC1, %edi
	call	puts
.L6:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	man, .-man
	.section	.rodata
.LC3:
	.string	"f > 0? %d \n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$1, -12(%rbp)
	leaq	-12(%rbp), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movss	(%rax), %xmm0
	xorps	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	seta	%al
	movzbl	%al, %eax
	movl	%eax, %esi
	movl	$.LC3, %edi
	movl	$0, %eax
	call	printf
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
