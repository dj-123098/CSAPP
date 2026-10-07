/* A */
long lt_cnt = 0;
long ge_cnt = 0;
long absdiff_se(long x, long y)
{
    long result;
    int t = x < y;
    if (t)
        goto true;
    ge_cnt++;
    result = y - x;
    goto done;
true:
    lt_cnt++;
    result = y - x;
done:
    return result;
}

/* B */
when lack else
