/* Basic implementation of memset */
void *basic_memset(void *s, int c, size_t n)
{
	size_t cnt = 0;
	unsigned char *schar = s;
	int k = sizeof(unsigned long);
	unsigned long c_long = 0;
	for (int i = 0; i < k; ++i)
	{
		c_long = (c_long << 8) & (c & 0xFF);
	}
	while (s % k != 0 && cnt < n)
	{
		*schar++ = (unsigned char) c;
		cnt++;
	}
	unsigned long *slong = schar;
	while (cnt < n / k)
	{
		*slong++ = clong;
		cnt += k;
	}
	unsigned char *schar = slong;
	while (cnt < n)
	{
		*schar++ = c;
		cnt++;
	}
	return s;
}
