#!/bin/bash
clear
gcc tiempo.c -c
gcc Seleccion.c tiempo.o -o Seleccion
./Seleccion 900000 <numeros10millones.txt >>salida.txt
./Seleccion 1000000 <numeros10millones.txt >>salida.txt


gcc Shell.c tiempo.o -o Shell
./Shell 100 <numeros10millones.txt >>salida.txt
./Shell 1000 <numeros10millones.txt >>salida.txt
./Shell 5000 <numeros10millones.txt >>salida.txt
./Shell 10000 <numeros10millones.txt >>salida.txt
./Shell 50000 <numeros10millones.txt >>salida.txt
./Shell 100000 <numeros10millones.txt >>salida.txt
./Shell 200000 <numeros10millones.txt >>salida.txt
./Shell 400000 <numeros10millones.txt >>salida.txt
./Shell 600000 <numeros10millones.txt >>salida.txt
./Shell 800000 <numeros10millones.txt >>salida.txt
./Shell 1000000 <numeros10millones.txt >>salida.txt
./Shell 2000000 <numeros10millones.txt >>salida.txt
./Shell 3000000 <numeros10millones.txt >>salida.txt
./Shell 4000000 <numeros10millones.txt >>salida.txt
./Shell 5000000 <numeros10millones.txt >>salida.txt
./Shell 6000000 <numeros10millones.txt >>salida.txt
./Shell 7000000 <numeros10millones.txt >>salida.txt
./Shell 8000000 <numeros10millones.txt >>salida.txt
./Shell 9000000 <numeros10millones.txt >>salida.txt
./Shell 10000000 <numeros10millones.txt >>salida.txt

gcc ABB.c tiempo.o -o ABB
./ABB 100 <numeros10millones.txt >>salida.txt
./ABB 1000 <numeros10millones.txt >>salida.txt
./ABB 5000 <numeros10millones.txt >>salida.txt
./ABB 10000 <numeros10millones.txt >>salida.txt
./ABB 50000 <numeros10millones.txt >>salida.txt
./ABB 100000 <numeros10millones.txt >>salida.txt
./ABB 200000 <numeros10millones.txt >>salida.txt
./ABB 400000 <numeros10millones.txt >>salida.txt
./ABB 600000 <numeros10millones.txt >>salida.txt
./ABB 800000 <numeros10millones.txt >>salida.txt
./ABB 1000000 <numeros10millones.txt >>salida.txt
./ABB 2000000 <numeros10millones.txt >>salida.txt
./ABB 3000000 <numeros10millones.txt >>salida.txt
./ABB 4000000 <numeros10millones.txt >>salida.txt
./ABB 5000000 <numeros10millones.txt >>salida.txt
./ABB 6000000 <numeros10millones.txt >>salida.txt
./ABB 7000000 <numeros10millones.txt >>salida.txt
./ABB 8000000 <numeros10millones.txt >>salida.txt
./ABB 9000000 <numeros10millones.txt >>salida.txt
./ABB 10000000 <numeros10millones.txt >>salida.txt

