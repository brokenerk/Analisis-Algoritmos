Procedimiento BurbujaSimple(A, n)
	{
		for(i = 0; i <= n-2; i++)
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
Fin Procedimiento