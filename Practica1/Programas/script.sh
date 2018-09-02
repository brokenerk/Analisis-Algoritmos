#!/bin/bash

clear
gcc tiempo.c -c

gcc BurbujaSimple.c tiempo.o -o BurbujaSimple
./BurbujaSimple 100 <numeros10millones.txt >>salida.txt
./BurbujaSimple 1000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 5000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 10000 <numeros10millones.txt >>salida.txt


gcc BurbujaOptimizada.c tiempo.o -o BurbujaOptimizada
./BurbujaOptimizada 100 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 1000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 5000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 10000 <numeros10millones.txt >>salida.txt

gcc Insercion.c tiempo.o -o Insercion
./Insercion 100 <numeros10millones.txt >>salida.txt
./Insercion 1000 <numeros10millones.txt >>salida.txt
./Insercion 5000 <numeros10millones.txt >>salida.txt
./Insercion 10000 <numeros10millones.txt >>salida.txt
./Insercion 50000 <numeros10millones.txt >>salida.txt
./Insercion 100000 <numeros10millones.txt >>salida.txt
./Insercion 200000 <numeros10millones.txt >>salida.txt
./Insercion 400000 <numeros10millones.txt >>salida.txt
./Insercion 600000 <numeros10millones.txt >>salida.txt
./Insercion 800000 <numeros10millones.txt >>salida.txt
./Insercion 1000000 <numeros10millones.txt >>salida.txt
./Insercion 2000000 <numeros10millones.txt >>salida.txt
./Insercion 3000000 <numeros10millones.txt >>salida.txt
./Insercion 4000000 <numeros10millones.txt >>salida.txt
./Insercion 5000000 <numeros10millones.txt >>salida.txt
./Insercion 6000000 <numeros10millones.txt >>salida.txt
./Insercion 7000000 <numeros10millones.txt >>salida.txt
./Insercion 8000000 <numeros10millones.txt >>salida.txt
./Insercion 9000000 <numeros10millones.txt >>salida.txt
./Insercion 10000000 <numeros10millones.txt >>salida.txt

gcc Seleccion.c tiempo.o -o Seleccion
./Seleccion 100 <numeros10millones.txt >>salida.txt
./Seleccion 1000 <numeros10millones.txt >>salida.txt
./Seleccion 5000 <numeros10millones.txt >>salida.txt
./Seleccion 10000 <numeros10millones.txt >>salida.txt
./Seleccion 50000 <numeros10millones.txt >>salida.txt
./Seleccion 100000 <numeros10millones.txt >>salida.txt
./Seleccion 200000 <numeros10millones.txt >>salida.txt
./Seleccion 400000 <numeros10millones.txt >>salida.txt
./Seleccion 600000 <numeros10millones.txt >>salida.txt
./Seleccion 800000 <numeros10millones.txt >>salida.txt
./Seleccion 1000000 <numeros10millones.txt >>salida.txt
./Seleccion 2000000 <numeros10millones.txt >>salida.txt
./Seleccion 3000000 <numeros10millones.txt >>salida.txt
./Seleccion 4000000 <numeros10millones.txt >>salida.txt
./Seleccion 5000000 <numeros10millones.txt >>salida.txt
./Seleccion 6000000 <numeros10millones.txt >>salida.txt
./Seleccion 7000000 <numeros10millones.txt >>salida.txt
./Seleccion 8000000 <numeros10millones.txt >>salida.txt
./Seleccion 9000000 <numeros10millones.txt >>salida.txt
./Seleccion 10000000 <numeros10millones.txt >>salida.txt

