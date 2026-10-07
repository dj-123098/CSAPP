short test(short x, short y)
{
    short val = y + 12;
    if (x < 0) {
        if (y > x)
            val = x * y;
        else
            val = x | y;
    } else if (y > 10)
        val = x / y;
    return val;
}
