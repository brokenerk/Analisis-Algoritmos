#include <stdio.h>
#include <string.h>
 
int max(int a, int b); 
int lcs( char *X, char *Y, int m, int n);

int main() 
{   
  char c1[1000];
  char c2[1000];
  scanf("%s", c1);
  scanf("%s", c2);
  int m = strlen(c1); 
  int n = strlen(c2); 
  printf("%d \n", lcs(c1, c2, m, n));   
  
  return 0; 
} 

/* Regresa la longitud de LCS para X[0..m-1], Y[0..n-1] */
int lcs( char *X, char *Y, int m, int n ) 
{ 
   int L[m+1][n+1]; 
   int i, j; 
   
   for (i=0; i<=m; i++) 
   { 
     for (j=0; j<=n; j++) 
     { 
       if (i == 0 || j == 0) 
         L[i][j] = 0; 
   
       else if (X[i-1] == Y[j-1]) 
         L[i][j] = L[i-1][j-1] + 1; 
   
       else
         L[i][j] = max(L[i-1][j], L[i][j-1]); 
     } 
   }   
   return L[m][n]; 
} 

int max(int a, int b) 
{ 
  if(a > b)
    return a;
  else 
    return b;
} 
