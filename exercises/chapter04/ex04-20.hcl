word srcB = [
	icode in { IRRMOVQ, IOPQ, IRMMOVQ, IMRMOVQ } : rB;
	icode in { IPUSHQ, IPOPQ, ICALL, IRET } : RRSP;
	1 : RNONE;
];
