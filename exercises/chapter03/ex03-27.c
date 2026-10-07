int fibonacci(int n)
{
    int prev = 0;
    int curr = 1;
    int tmp;
    if (n <= 0)
        goto L1;
L2:
    tmp = curr;
    curr = prev + curr;
    prev = curr;
    --n;
    if (n != 0)
        goto L2;
L1:
    return prev;
}
