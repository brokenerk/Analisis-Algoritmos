Procedimiento Seleccion(A, n)
	{
		for(k=0; k<n-2; k++)
		{
			p=k;
			for(i = k+1; i<n-1; i++)
			{
				if(A[i] < A[p])
					p = i;
			}
			temp = A[p];
			A[p] = A[k];
			A[k] = temp;
		}
	}
Fin Procedimiento