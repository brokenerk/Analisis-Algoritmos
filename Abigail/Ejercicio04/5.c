#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int n = 5, i = 0, j = 0, s[n], s2[n];
  int Contador = 0, Funcion;
  Contador += 4;
  for (i = n - 1, j = 0; i >= 0; i--, j++, Contador+=2)
  {
  	  s2[j] = s[i]; Contador++;
  	  Contador++;
  	  Contador++;
  }
  Contador++;

  Contador+=2; // Asignacion y caso no entra
  for (i = 0; i < n; i++,  Contador++)
  {
  	s[i] = s2[i];
  	Contador+=3;
  } 
  Contador++;
  	
  Funcion = 9*n +8;
  printf("\nCon n = %d \n", n); 
  printf("# por Funcion: %d \n", Funcion);
  printf("# de reales: %d \n", Contador);
  return 0;
}