#!/bin/bash

clear
gcc tiempo.c -c

gcc BurbujaSimple.c tiempo.o -o BurbujaSimple
./BurbujaSimple 100 <numeros10millones.txt >>salida.txt
./BurbujaSimple 1000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 5000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 10000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 50000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 100000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 200000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 400000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 600000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 800000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 1000000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 2000000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 3000000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 4000000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 5000000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 6000000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 7000000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 8000000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 9000000 <numeros10millones.txt >>salida.txt
./BurbujaSimple 10000000 <numeros10millones.txt >>salida.txt

gcc BurbujaOptimizada.c tiempo.o -o BurbujaOptimizada
./BurbujaOptimizada 100 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 1000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 5000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 10000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 50000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 100000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 200000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 400000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 600000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 800000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 1000000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 2000000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 3000000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 4000000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 5000000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 6000000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 7000000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 8000000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 9000000 <numeros10millones.txt >>salida.txt
./BurbujaOptimizada 10000000 <numeros10millones.txt >>salida.txt