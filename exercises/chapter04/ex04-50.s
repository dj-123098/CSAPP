switchv:
	cmpq	$3, %rdi
	je	.L4
	jg	.L3
	testq	%rdi, %rdi
	je	.L5
	cmpq	$2, %rdi
	jne	.L6
	movl	$3003, %eax
	ret
.L3:
	cmpq	$5, %rdi
	jne	.L7
	movl	$3003, %eax
	ret
.L4:
	movl	$3276, %eax
	ret
.L5:
	movl	$2730, %eax
	ret
.L6:
	movl	$3549, %eax
	ret
.L7:
	movl	$3549, %eax
	ret
