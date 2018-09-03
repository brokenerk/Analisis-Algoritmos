#!/bin/bash
clear
gcc tiempo.c -c
gcc Insercion.c tiempo.o -o Insercion
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

gcc DicBin.c tiempo.o -o DicBin
./DicBin 100 <numeros10millones.txt >>salida.txt
./DicBin 1000 <numeros10millones.txt >>salida.txt
./DicBin 5000 <numeros10millones.txt >>salida.txt
./DicBin 10000 <numeros10millones.txt >>salida.txt
./DicBin 50000 <numeros10millones.txt >>salida.txt
./DicBin 100000 <numeros10millones.txt >>salida.txt
./DicBin 200000 <numeros10millones.txt >>salida.txt
./DicBin 400000 <numeros10millones.txt >>salida.txt
./DicBin 600000 <numeros10millones.txt >>salida.txt
./DicBin 800000 <numeros10millones.txt >>salida.txt
./DicBin 1000000 <numeros10millones.txt >>salida.txt
./DicBin 2000000 <numeros10millones.txt >>salida.txt
./DicBin 3000000 <numeros10millones.txt >>salida.txt
./DicBin 4000000 <numeros10millones.txt >>salida.txt
./DicBin 5000000 <numeros10millones.txt >>salida.txt
./DicBin 6000000 <numeros10millones.txt >>salida.txt
./DicBin 7000000 <numeros10millones.txt >>salida.txt
./DicBin 8000000 <numeros10millones.txt >>salida.txt
./DicBin 9000000 <numeros10millones.txt >>salida.txt
./DicBin 10000000 <numeros10millones.txt >>salida.txt

