QuickSort(lista, inf, sup)
{
	elem_div = lista[sup];
	i = inf - 1;
	j = sup;
	cont = 1;

	if(inf >= sup)
		return;
	while(cont)
	{
		while(lista[i++] < elem_div);
		while(lista[--j] > elem_div);
		if(i < j)
		{
			temp = lista[i];
			lista[i] = lista[j];
			lista[j] = temp;
		}
		else
			cont = 0;
	} 
	temp = lista[i];
	lista[i] = lista[sup];
	lista[sup] = temp;

	QuickSort(lista, inf, i - 1);
	QuickSort(lista, i + 1, sup);
}

