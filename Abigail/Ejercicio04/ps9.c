func Producto2Mayores(A, n)
	if (A[1] > A[2])
		mayor1 = A[1];
		mayor2 = A[2];
	else
		mayor1 = A[2];
		mayor2 = A[1];

	i = 3;

	while(i <= n)
		if(A[i] > mayor1)
			mayor2 = mayor1;
			mayor1 = A[i];

		else if (A[i] > mayor2)
			mayor2 = A[i];

		i = i + 1;
	return = mayor1 * mayor2;