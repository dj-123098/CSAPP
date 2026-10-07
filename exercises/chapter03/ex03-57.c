double funct3(int *ap, double b, long c, float *dp)
{
	if (b > *ap)
	{
		return *dp * c;
	}
	else
	{
		return *dp * 2 + c;
	}
}
