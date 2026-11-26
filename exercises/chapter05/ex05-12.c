/* Compute prefix sum of vector a */
void psum1(float a[], float p[], long n)
{
	long i, sum;
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += a[i];
		p[i] = sum;
	}
}
