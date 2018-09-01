#!/bin/bash

clear
gcc tiempo.c -c
gcc P1.c tiempo.o -o P1
./P1 100 <numeros10millones.txt >>salida.txt
./P1 1000 <numeros10millones.txt >>salida.txt
./P1 5000 <numeros10millones.txt >>salida.txt
./P1 10000 <numeros10millones.txt >>salida.txt
./P1 50000 <numeros10millones.txt >>salida.txt
./P1 100000 <numeros10millones.txt >>salida.txt
./P1 200000 <numeros10millones.txt >>salida.txt
./P1 400000 <numeros10millones.txt >>salida.txt
./P1 600000 <numeros10millones.txt >>salida.txt
./P1 800000 <numeros10millones.txt >>salida.txt
./P1 1000000 <numeros10millones.txt >>salida.txt
./P1 2000000 <numeros10millones.txt >>salida.txt
./P1 3000000 <numeros10millones.txt >>salida.txt
./P1 4000000 <numeros10millones.txt >>salida.txt
./P1 5000000 <numeros10millones.txt >>salida.txt
./P1 6000000 <numeros10millones.txt >>salida.txt
./P1 7000000 <numeros10millones.txt >>salida.txt
./P1 8000000 <numeros10millones.txt >>salida.txt
./P1 9000000 <numeros10millones.txt >>salida.txt
./P1 10000000 <numeros10millones.txt >>salida.txt