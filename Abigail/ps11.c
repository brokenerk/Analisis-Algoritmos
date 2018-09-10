func MaximoComunDivisor(m, n)
{
	a = max(n, m);
	b = min (n, m);
	residuo = 1;
	while(residuo > 0)
	{
		residuo = a mod b;
		a = b;
		b = residuo;
	}
	MaximoComunDivisor = a;
	return MaximoComunDivisor;
}
