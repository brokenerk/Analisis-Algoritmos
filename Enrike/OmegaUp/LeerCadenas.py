#Link: https://omegaup.com/arena/problem/Aprendiendo-a-leer-cadenas#problems

N = input()

cadenas = []

for i in range (0, N):
	leer = raw_input()
	cadenas.append(str(leer))

for i in range (0, N):
	longitud = len(cadenas[i])
	print ('"' + cadenas[i] + '"' + ' tiene '+ str(longitud) + ' caracteres')
