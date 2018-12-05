#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *cadena = (char*)calloc(10000000*5, sizeof(char*));
int main(){
    while(scanf("%s", cadena)){
        /*Leemos y evaluamos n cadenas hasta hallar un punto*/
        if(strcmp(cadena, ".") == 0) break;
        int longitud = strlen(cadena);
        //Es claro que toda cadena esta elevada a la 1 por defecto, asumimos que a es la misma cadena s
        int power = 1;
        /*Iniciamos desde 2 porque toda cadena esta elevada a la 1 por defecto*/
        for(int i = 2; i <= longitud; i++){
            /*Revisamos divisibilidad para nuestra n propuesta*/
            if(longitud % i == 0){
                int L = longitud / i;
                //Asumimos que la subcadena a siempre empata con las anteriores
                int empata = 1; //Bandera
                for(int j = L; j < longitud; j++){
                    /*Algoritmo KMP*/
                    if (cadena[j] != cadena[j % L]){ 
                        /*En cuanto la subcadena no coincida con a, acabamos. Probamos con otra n*/
                        empata = 0; 
                        break;
                    }
                }
                if(empata){ 
                    /*Vamos obteniendo el periodo o potencia de la subcadena a si sí empató*/
                    power = i;
                }
            }
        }
        printf ("%d\n", power);
    }
    return 0;
}