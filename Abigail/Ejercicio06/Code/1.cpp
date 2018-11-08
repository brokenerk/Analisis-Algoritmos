#include <stdio.h> 
#include <limits.h>
#include <iostream> 
using namespace std;

// Maximo de dos numeros 
long long int max(long long int a, long long int b);
// Maximo de tres numeros
long long int max(long long int a, long long int b, long long int c);
// Encuentra la suma maxima posible en arr[] dado que arr[m] es parte de el.
long long int maxCrossingSum(long long int arr[], int l, int m, int h);
// Retorna la suma maxima del subarreglo en arr[l..h]
long long int maxSubArraySum(long long int arr[], int l, int h);
  
/* Inicio */
int main() 
{ 
   //int arr[] = {2, 3, 4, 5, 7}; 
   //int n = sizeof(arr)/sizeof(arr[0]); 
  int n;
  // Leer n
  cin >> n;
  long long int arr[n];
  // Leer arreglo
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  long long int max_sum = maxSubArraySum(arr, 0, n-1); 
  printf("%lli", max_sum); 
  //getchar(); 

  return 0; 
} 

// Maximo de dos numeros
long long int max(long long int a, long long int b) { 
  if(a > b) {
    return a;
  }
  else return b;
} 

// Maximo de tres numeros
long long int max(long long int a, long long int b, long long int c) { 
  return max(max(a, b), c); 
} 

// Encuentra la suma maxima posible en arr[] dado que arr[m] es parte de el.
long long int maxCrossingSum(long long int arr[], int l, int m, int h) 
{ 
    // Incluye elementos de la izquierda a la mitad.
    long long int sum = 0; 
    long long int sum_izq = INT_MIN; 
    for (int i = m; i >= l; i--) 
    { 
        sum = sum + arr[i]; 
        if (sum > sum_izq) 
          sum_izq = sum; 
    } 
  
    // Incluye elementos de la derecha a la mitad.
    sum = 0; 
    long long int sum_der = INT_MIN; 
    for (int i = m+1; i <= h; i++) 
    { 
        sum = sum + arr[i]; 
        if (sum > sum_der) 
          sum_der = sum; 
    } 

    // Regresa la suma de elementos de la izquierda  y derecha a la mitad.
    return sum_izq + sum_der; 
} 
  
// Retorna la suma maxima del subarreglo en arr[l..h]
long long int maxSubArraySum(long long int arr[], int l, int h) 
{ 
   // Caso base : Un solo elemento
   if (l == h) 
     return arr[l]; 
  
   // Encuentra el punto medio
   int m = (l + h)/2; 

   /* Regresa el maximo de los 3 casos posibles 
      a) Maxima suma de un subarreglo en la mitad izquierda.
      b) Maxima suma de un subarreglo en la mitad derecha.
      c) Maxima suma de un subarreglo cada que el subarreglo cruce la mitad.*/
   return max(maxSubArraySum(arr, l, m), 
              maxSubArraySum(arr, m+1, h), 
              maxCrossingSum(arr, l, m, h)); 
} 
