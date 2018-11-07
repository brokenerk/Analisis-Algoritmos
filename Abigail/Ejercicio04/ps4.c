anterior = 1;
actual = 1;
while(n > 2)
{
	aux = anterior + actual;
	anterior = actual;
	actual = aux;
	n = n-1;
}