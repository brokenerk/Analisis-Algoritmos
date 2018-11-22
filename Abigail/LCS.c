// LCS
#include <stdio.h>
int LSS(char *a, char *b);
int Max(int a, int b);

int main(void)
{
	char c1[1000];
	char c2[1000];
	scanf("%s", c1);
	scanf("%s", c2);
	printf("%d \n", LCS(c1, c2) );
}

int LCS(char *a, char *b)
{
	if((*a) == '\0' || (*b) == '\0')
		return 0;
	else if (*a == *b)
		return 1 + LCS(a + 1, b + 1);
	else
		return Max(LCS(a + 1, b), LCS(a, b + 1));
}
int Max(int a, int b)
{
	if(a > b)
		return a;
	else 
		return b;
}