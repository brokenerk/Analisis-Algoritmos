/*
	Autor(a): Abigail Nicolás Sayago
	EJERCICIO 1
*/
	int i, j, tem;
	for(i = 1; i < n; i++)
	{
		for(j = 0; j <n-1; j++)
		{
			temp = A[j];
			A[j] = A[j+1];
			A[j+1] = temp;
		}
	}

/*
	EJERCICIO 2
*/

	int i, polinomio = 0;
	for(i = 0; i <= n; i++)
	{
		polinomio = polinomio*z + A[n-i];
	}
	return 0;

/*
	EJERCICIO 3
*/
	int i, j, tem;
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
		{
			C[i,j] = 0;
			for(k = 1; k <= n; k++)
			{
				C[i,j] = C[i,j] + A[i,k]*B[k,j]; 
			}
		}
	}

/*
	EJERCICIO 4 
*/
	int n, aux;
	int anterior = 1;
	int actual = 1;
	while(n > 2)
	{
		aux = anterior + actual;
		anterior = actual;
		actual = aux;
		n = n-1;
	}
/*
	EJERCICIO 5 
*/
	int i, j;
	for(i = n -1; j = 0; i >= 0; i--, j++)
	{
		s2[j] = s[i];
	}

	for(i = 0; i < n; i++)
	{
		s[i] = s2[i];
	}

/*
	EJERCICIO 6
*/
	int i;
	for(i = 10; i < n*5; i *= 2)
		printf("\"Algoritmos\n\"");

/*
	EJERCICIO 7 
*/
	int i, j;
	for(j = n; j>1; j /=2 )
	{
		if(j < (n/2))
		{
			for(i = 0; i < n; i += 2)
			{
				printf("\"Algoritmos\n\"");
			}
		}
	}

/*
	EJERCICIO 8 
*/
	int i;
	i = n;
	while(i >= 0)
	{
		for(j = n; i < j; i-= 2, j /= 2)
		{
			printf("\"Algoritmos\n\"");	
		}
	}
	return 0;

/*
	EJERCICIO 9 
*/

	int Producto2Mayores(A, n)
	{
		if (A[1] > A[2])
		{
			mayor1 = A[1];
			mayor2 = A[2];
		}
		else
		{
			mayor1 = A[2];
			mayor2 = A[1];
		}
		i = 3;
		while(i <= n)
		{
			if(A[i] > mayor1)
			{
				mayor2 = mayor1;
				mayor1 = A[i];
			}
			else if (A[i] > mayor2)
			{
				mayor2 = A[i];
			}
			i = i + 1;
		}
		return = mayor1 * mayor2;
	}

/*
	EJERCICIO 10 
*/
	void OrdenamientoIntercambio(a, n)
	{
		int i, j, temp;
		for(i = 0; i < n-1; i++)
		{
			for(j = i + 1; j < n; j++)
			{
				if(a[j] < a[i])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
	}

/*
	EJERCICIO 11 
*/
	int MaximoComunDivisor(m, n)
	{
		int a, b, residuo, MaximoComunDivisor;
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

/*
	EJERCICIO 12 
*/
	void BurbujaOptimizada(int A[], int n)
	{
		int j, i, aux, cambios;
		cambios = TRUE;
		i = 0;
		while((i < n-1) && (cambios != FALSE))
		{
			cambios = FALSE;
			for(j=0; j<=(n-2)-i; j++)
			{
				if (A[j] > A[j+1])
				{
					aux = A[j];
					A[j] = A[j+1];
					A[j+1] = aux;
					cambios = TRUE;
				}
			}
			i++;
		}
	}


/*
	EJERCICIO 13 
*/
	void BurbujaSimple(int A[], int n)
	{
		int j, i, aux;
		for(i = 0; i <= n-1; i++)
		{
			for(j = 0; j <= (n-2)-i; j++)
			{
				if (A[j] > A[j+1])
				{
					aux = A[j];
					A[j] = A[j+1];
					A[j+1] = aux;
				}
			}
		}
	}

/*
	EJERCICIO 14 
*/
	void Ordena(a, b, c)
	{
		if(a > b)
		{
			if(a > c)
			{
				if(b > c)
					salida (a, b, c);
				else
					salida (a, c, b);		
			}
			else
			{
				salida (c, a, b);
			}
		}
		else
		{
			if(b > c)
			{
				if(a > c)
					salida(b, a, c);
				else
					salida(b, c, a);
			}
			else
				salida(c, b, a);
		}
	}

/*
	EJERCICIO 15 
*/
	void Seleccion(int A[], int n)
	{
		int k, p, i, temp;
		for(k=0; k<n-1; k++)
		{
			p=k;
			for(i=k+1; i<n; i++)
			{
				if(A[i]<A[p])
					p=i;
			}
			temp = A[p];
			A[p] = A[k];
			A[k] = temp;
		}
	}
