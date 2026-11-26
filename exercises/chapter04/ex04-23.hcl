word aluB = [
	icode in { IRMMOVQ, IMRMOVQ, IOPQ, ICALL, IRET, IPUSHQ, IPOPQ } valB;
	icode in { IRRMOVQ, IIRMOVQ } 0;
]
