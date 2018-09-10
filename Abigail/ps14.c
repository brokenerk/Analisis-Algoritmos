Procedimiento Ordena(a, b, c)
{
	if(a > b)
		if(a > c)
			if(b > c)
				salida (a, b, c);
			else
				salida (a, c, b);		
		else
			salida (c, a, b);
	else
		if(b > c)
			if(a > c)
				salida(b, a, c);
			else
				salida(b, c, a);
		else
			salida(c, b, a);
}