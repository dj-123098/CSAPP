/* A */
void cond(short a, short *p)
{
    if (!a)
        goto L1;
    if (*p >= a)
        goto L1;
    *p = a;
L1:
    return;
}

/* B */
obvious
