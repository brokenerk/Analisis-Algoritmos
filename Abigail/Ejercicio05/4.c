double BusquedaTernaria(double f[], int l, int r, double absolutePrecision)
{
	if(r-1 <= absolutePrecision)
		return (i + r) / 2.0;
	else
	{
		int m1 = (2 * l + r) / 3;
		int m2 = (l + 2 * r) / 3;

		if(f[m1] < f[m2])
			return BusquedaTernaria(f, m1, r, absolutePrecision);
		else
			return BusquedaTernaria(f, l, m2, absolutePrecision);
	}
}

