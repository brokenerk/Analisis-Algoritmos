//Subsecuencia Común más Larga
#include<stdio.h>

int LCS(char *a, char *b);
int Max(int a, int b);

int main(void)
{
	char c1[100];
	char c2[100];

	scanf("%s", c1);
	scanf("%s", c2);

	printf("\nTamaño subsecuencia más larga: %d\n", LCS(c1, c2));
	return 0;
}

int LCS(char *a, char *b)
{
	if((*a)=='\0'||(*b)=='\0')
		return 0;
	else if(*a==*b)
		return 1+LCS(a+1, b+1);
	else
		return Max(LCS(a+1,b), LCS(a,b+1));
}

int Max(int a, int b)
{
	if(a>b)
		return a;
	else
		return b;
}