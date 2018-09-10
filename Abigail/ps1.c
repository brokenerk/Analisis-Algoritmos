for(i = 1; i < n; i++) 
{
	for(j = 0; j <n-1; j++)
	{
		temp = A[j];
		A[j] = A[j+1];
		A[j+1] = temp;
	}
} 