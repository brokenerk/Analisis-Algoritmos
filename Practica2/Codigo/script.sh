gcc tiempo.c -c

gcc Lineal.c tiempo.o -o Lineal
./Lineal 100 <ordenados.txt >>lineal.txt
./Lineal 1000 <ordenados.txt >>lineal.txt
./Lineal 5000 <ordenados.txt >>lineal.txt
./Lineal 10000 <ordenados.txt >>lineal.txt
./Lineal 50000 <ordenados.txt >>lineal.txt
./Lineal 100000 <ordenados.txt >>lineal.txt
./Lineal 200000 <ordenados.txt >>lineal.txt
./Lineal 400000 <ordenados.txt >>lineal.txt
./Lineal 600000 <ordenados.txt >>lineal.txt
./Lineal 800000 <ordenados.txt >>lineal.txt
./Lineal 1000000 <ordenados.txt >>lineal.txt
./Lineal 2000000 <ordenados.txt >>lineal.txt
./Lineal 3000000 <ordenados.txt >>lineal.txt
./Lineal 4000000 <ordenados.txt >>lineal.txt
./Lineal 5000000 <ordenados.txt >>lineal.txt
./Lineal 6000000 <ordenados.txt >>lineal.txt
./Lineal 7000000 <ordenados.txt >>lineal.txt
./Lineal 8000000 <ordenados.txt >>lineal.txt
./Lineal 9000000 <ordenados.txt >>lineal.txt
./Lineal 10000000 <ordenados.txt >>lineal.txt

./LinealHilos 2 100 <ordenados.txt >>lineal.txt
./LinealHilos 2 1000 <ordenados.txt >>lineal.txt
./LinealHilos 2 5000 <ordenados.txt >>lineal.txt
./LinealHilos 2 10000 <ordenados.txt >>lineal.txt
./LinealHilos 2 50000 <ordenados.txt >>lineal.txt
./LinealHilos 2 100000 <ordenados.txt >>lineal.txt
./LinealHilos 2 200000 <ordenados.txt >>lineal.txt
./LinealHilos 2 400000 <ordenados.txt >>lineal.txt
./LinealHilos 2 600000 <ordenados.txt >>lineal.txt
./LinealHilos 2 800000 <ordenados.txt >>lineal.txt
./LinealHilos 2 1000000 <ordenados.txt >>lineal.txt
./LinealHilos 2 2000000 <ordenados.txt >>lineal.txt
./LinealHilos 2 3000000 <ordenados.txt >>lineal.txt
./LinealHilos 2 4000000 <ordenados.txt >>lineal.txt
./LinealHilos 2 5000000 <ordenados.txt >>lineal.txt
./LinealHilos 2 6000000 <ordenados.txt >>lineal.txt
./LinealHilos 2 7000000 <ordenados.txt >>lineal.txt
./LinealHilos 2 8000000 <ordenados.txt >>lineal.txt
./LinealHilos 2 9000000 <ordenados.txt >>lineal.txt
./LinealHilos 2 10000000 <ordenados.txt >>lineal.txt

gcc Binaria.c tiempo.o -o Binaria
./Binaria 100 <ordenados.txt >>Binaria.txt
./Binaria 1000 <ordenados.txt >>Binaria.txt
./Binaria 5000 <ordenados.txt >>Binaria.txt
./Binaria 10000 <ordenados.txt >>Binaria.txt
./Binaria 50000 <ordenados.txt >>Binaria.txt
./Binaria 100000 <ordenados.txt >>Binaria.txt
./Binaria 200000 <ordenados.txt >>Binaria.txt
./Binaria 400000 <ordenados.txt >>Binaria.txt
./Binaria 600000 <ordenados.txt >>Binaria.txt
./Binaria 800000 <ordenados.txt >>Binaria.txt
./Binaria 1000000 <ordenados.txt >>Binaria.txt
./Binaria 2000000 <ordenados.txt >>Binaria.txt
./Binaria 3000000 <ordenados.txt >>Binaria.txt
./Binaria 4000000 <ordenados.txt >>Binaria.txt
./Binaria 5000000 <ordenados.txt >>Binaria.txt
./Binaria 6000000 <ordenados.txt >>Binaria.txt
./Binaria 7000000 <ordenados.txt >>Binaria.txt
./Binaria 8000000 <ordenados.txt >>Binaria.txt
./Binaria 9000000 <ordenados.txt >>Binaria.txt
./Binaria 10000000 <ordenados.txt >>Binaria.txt

./BinariaHilos 2 100 <ordenados.txt >>Binaria.txt
./BinariaHilos 2 1000 <ordenados.txt >>Binaria.txt
./BinariaHilos 2 5000 <ordenados.txt >>Binaria.txt
./BinariaHilos 2 10000 <ordenados.txt >>Binaria.txt
./BinariaHilos 2 50000 <ordenados.txt >>Binaria.txt
./BinariaHilos 2 100000 <ordenados.txt >>Binaria.txt
./BinariaHilos 2 200000 <ordenados.txt >>Binaria.txt
./BinariaHilos 2 400000 <ordenados.txt >>Binaria.txt
./BinariaHilos 2 600000 <ordenados.txt >>Binaria.txt
./BinariaHilos 2 800000 <ordenados.txt >>Binaria.txt
./BinariaHilos 2 1000000 <ordenados.txt >>Binaria.txt
./BinariaHilos 2 2000000 <ordenados.txt >>Binaria.txt
./BinariaHilos 2 3000000 <ordenados.txt >>Binaria.txt
./BinariaHilos 2 4000000 <ordenados.txt >>Binaria.txt
./BinariaHilos 2 5000000 <ordenados.txt >>Binaria.txt
./BinariaHilos 2 6000000 <ordenados.txt >>Binaria.txt
./BinariaHilos 2 7000000 <ordenados.txt >>Binaria.txt
./BinariaHilos 2 8000000 <ordenados.txt >>Binaria.txt
./BinariaHilos 2 9000000 <ordenados.txt >>Binaria.txt
./BinariaHilos 2 10000000 <ordenados.txt >>Binaria.txt

gcc ABB.c tiempo.o -o ABB
./ABB 100 <desordenados.txt >>ABB.txt
./ABB 1000 <desordenados.txt >>ABB.txt
./ABB 5000 <desordenados.txt >>ABB.txt
./ABB 10000 <desordenados.txt >>ABB.txt
./ABB 50000 <desordenados.txt >>ABB.txt
./ABB 100000 <desordenados.txt >>ABB.txt
./ABB 200000 <desordenados.txt >>ABB.txt
./ABB 400000 <desordenados.txt >>ABB.txt
./ABB 600000 <desordenados.txt >>ABB.txt
./ABB 800000 <desordenados.txt >>ABB.txt
./ABB 1000000 <desordenados.txt >>ABB.txt
./ABB 2000000 <desordenados.txt >>ABB.txt
./ABB 3000000 <desordenados.txt >>ABB.txt
./ABB 4000000 <desordenados.txt >>ABB.txt
./ABB 5000000 <desordenados.txt >>ABB.txt
./ABB 6000000 <desordenados.txt >>ABB.txt
./ABB 7000000 <desordenados.txt >>ABB.txt
./ABB 8000000 <desordenados.txt >>ABB.txt
./ABB 9000000 <desordenados.txt >>ABB.txt
./ABB 10000000 <desordenados.txt >>ABB.txt