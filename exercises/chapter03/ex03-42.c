/* A */
short test(struct ACE *ptr)
{
    short res = 1;
    while (ptr != NULL)
    {
        res *= ptr->v;
        ptr = ptr->p;
    }
    return res;
}

/* B */
// A linked list. product.
