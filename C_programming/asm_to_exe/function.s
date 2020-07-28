.data
	string:
		.ascii "Hellow Mo Arquam"
.text
	.globl	_start
.type exitfunc,@function
_start:
	movl $4,%eax
	movl $1,%ebx
	movl $string,%ecx
	movl $16,%edx
	int $0x80
	call exitfunc
exitfunc:
	movl $1,%eax
	movl $0,%ebx
	int $0x80
	ret
