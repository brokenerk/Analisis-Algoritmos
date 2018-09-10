Procedimiento BurbujaOptimizada(A, n)	
	cambios = "No";
	i = 0;
	while((i < n-1) && (cambios != "No"))
	{
		cambios = "No";
		for(j=0; j<=(n-2)-i; j++)
		{
			if (A[j] > A[j+1])
			{
				aux = A[j];
				A[j] = A[i];
				A[i] = aux;
				cambios = "Si";
			}
		}
		i++;
	}
Fin Procedimiento


