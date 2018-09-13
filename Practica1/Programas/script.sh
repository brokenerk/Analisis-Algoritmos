#!/bin/bash
#Para ejecutar el script e iniciar las pruebas: sh script.sh
gcc tiempo.c -c
gcc BurbujaSimple.c tiempo.o -o BurbujaSimple
./BurbujaSimple 100 <numeros10millones.txt >>salida.txt
./BurbujaSimple 500 <numeros10millones.txt >>salida.txt
./BurbujaSimple 800 <numeros10millones.txt >>salida.txt
./BurbujaSimple 1000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 1500 <numeros10millones.txt >>salida.txt
./BurbujaSimple 2000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 4000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 6000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 8000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 10000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 15000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 20000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 40000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 60000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 80000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 90000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 100000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 120000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 150000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 200000 <numeros10millones.txt >>salida.txt

gcc BurbujaOptimizada.c tiempo.o -o BurbujaOptimizada
./BurbujaOptimizada 100 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 500 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 800 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 1000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 1500 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 2000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 4000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 6000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 8000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 10000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 15000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 20000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 40000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 60000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 80000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 90000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 100000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 120000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 150000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 200000 <numeros10millones.txt >>salida.txt

gcc Insercion.c tiempo.o -o Insercion
./Insercion 100 <numeros10millones.txt >>salida.txt
./Insercion 500 <numeros10millones.txt >>salida.txt
./Insercion 1000 <numeros10millones.txt >>salida.txt
./Insercion 2000 <numeros10millones.txt >>salida.txt
./Insercion 5000 <numeros10millones.txt >>salida.txt
./Insercion 8000 <numeros10millones.txt >>salida.txt
./Insercion 9000 <numeros10millones.txt >>salida.txt
./Insercion 10000 <numeros10millones.txt >>salida.txt
./Insercion 20000 <numeros10millones.txt >>salida.txt
./Insercion 50000 <numeros10millones.txt >>salida.txt
./Insercion 70000 <numeros10millones.txt >>salida.txt
./Insercion 90000 <numeros10millones.txt >>salida.txt
./Insercion 100000 <numeros10millones.txt >>salida.txt
./Insercion 200000 <numeros10millones.txt >>salida.txt
./Insercion 400000 <numeros10millones.txt >>salida.txt
./Insercion 500000 <numeros10millones.txt >>salida.txt
./Insercion 600000 <numeros10millones.txt >>salida.txt
./Insercion 800000 <numeros10millones.txt >>salida.txt
./Insercion 1000000 <numeros10millones.txt >>salida.txt
./Insercion 2000000 <numeros10millones.txt >>salida.txt

gcc Seleccion.c tiempo.o -o Seleccion
./Seleccion 100 <numeros10millones.txt >>salida.txt
./Seleccion 500 <numeros10millones.txt >>salida.txt
./Seleccion 1000 <numeros10millones.txt >>salida.txt
./Seleccion 2000 <numeros10millones.txt >>salida.txt
./Seleccion 5000 <numeros10millones.txt >>salida.txt
./Seleccion 8000 <numeros10millones.txt >>salida.txt
./Seleccion 9000 <numeros10millones.txt >>salida.txt
./Seleccion 10000 <numeros10millones.txt >>salida.txt
./Seleccion 20000 <numeros10millones.txt >>salida.txt
./Seleccion 50000 <numeros10millones.txt >>salida.txt
./Seleccion 70000 <numeros10millones.txt >>salida.txt
./Seleccion 90000 <numeros10millones.txt >>salida.txt
./Seleccion 100000 <numeros10millones.txt >>salida.txt
./Seleccion 200000 <numeros10millones.txt >>salida.txt
./Seleccion 400000 <numeros10millones.txt >>salida.txt
./Seleccion 500000 <numeros10millones.txt >>salida.txt
./Seleccion 600000 <numeros10millones.txt >>salida.txt
./Seleccion 800000 <numeros10millones.txt >>salida.txt
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

