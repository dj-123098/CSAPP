word dstM = [
	icode in { IRRMOVQ } : rA;
	icode in { IRIMOVQ, IOPQ} : rA;
	icode in { IPUSHQ, IPOPQ, ICALL, IRET } : RRSP;
	1 : RNONE;
];
