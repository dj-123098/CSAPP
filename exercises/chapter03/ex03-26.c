/* A */
// jump to middle

/* B */
short test_one(unsigned short x)
{
    short val = 1;
    while (x != 0) {
        val = val ^ x;
        x = x >> 1;
    }
    return val & 0xFFFF0000;
}

/* C */
// 
