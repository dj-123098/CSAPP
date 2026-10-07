long cread_alt(long *xp)
{
	long dummy = 0;
	long *p = xp? xp : &dummy;
	return *p;
}
