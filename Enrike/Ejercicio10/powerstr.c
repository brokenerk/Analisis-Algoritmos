#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int max(int a, int b){
    if(a > b) return a;
    else return b;
}
 
char *cadena = (char*)calloc(10000000, sizeof(char*));
int main(){
    while(scanf("%s", cadena)) {
        if(strcmp(cadena, ".") == 0) break;
 
        int longitud = strlen(cadena);
        int power = 1;
 
        for(int i = 2; i <= longitud; i++){
            if(longitud % i == 0){
                int L = longitud / i;
                int empata = 1;
                for(int j = L; j < longitud; j++){
                    if (cadena[j] != cadena[j % L]){ 
                        empata = 0; 
                        break;
                    }
                }
                if(empata){ 
                    power = max(power, i);
                }
            }
        }
        printf ("%d\n", power);
    }
    return 0;
}