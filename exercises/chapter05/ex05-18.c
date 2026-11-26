double poly_horner4(double a[], double x, long degree)
{
    long i;
    long limit = degree - 3;
    double x2 = x * x;
    double x3 = x2 * x;
    double x4 = x3 * x;
    double r0 = a[degree], r1 = 0, r2 = 0, r3 = 0;

    for (i = degree - 1; i >= limit; i -= 4) {
        r0 = a[i]     + x  * r0;
        r1 = a[i-1]   + x  * r1;
        r2 = a[i-2]   + x  * r2;
        r3 = a[i-3]   + x  * r3;
    }
    return r0 + x * r1 + x2 * r2 + x3 * r3;
}
