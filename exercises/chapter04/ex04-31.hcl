word d_dstE = [
    D_icode in { IRRMOVQ, IOPQ, IIRMOVQ, IRMMOVQ, IMRMOVQ }: D_rB;
    D_icode in { IPUSHQ, IPOPQ, ICALL, IRET }: RSP;
    1: RNONE;
];
