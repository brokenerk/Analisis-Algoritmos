func OrdenamientoIntercambio(a, n)	
for(i = 0; i < n-1; i++)
	for(int j = i + 1; j < n; j++)
		if(a[j] < a[i])
		{	temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
fin