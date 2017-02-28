	.file	"5.5.c"
	.text
	.globl	poly
	.type	poly, @function
poly:
.LFB24:
	.cfi_startproc
	movsd	(%rdi), %xmm2
	movapd	%xmm0, %xmm1
	movl	$1, %eax
	jmp	.L2
.L3:
	movapd	%xmm1, %xmm3
	mulsd	(%rdi,%rax,8), %xmm3
	addsd	%xmm3, %xmm2
	mulsd	%xmm0, %xmm1
	addq	$1, %rax
.L2:
	cmpq	%rsi, %rax
	jle	.L3
	movapd	%xmm2, %xmm0
	ret
	.cfi_endproc
.LFE24:
	.size	poly, .-poly
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
