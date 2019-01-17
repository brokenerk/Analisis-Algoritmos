#Link: https://omegaup.com/arena/problem/bpb#problems

def sumar(n):
	suma = 0
	for i in n:
		suma = suma + i
	return suma

n = raw_input()
N = int(n)
boletos = 0
digitos = list(map(int, str(N)))

while (sumar(digitos) != 21):
	if(N == 9999999):
		N = 0
	else:
		N = N + 1
	digitos = list(map(int, str(N)))
	boletos = boletos + 1

resultado = ""
longitud = 7 - len(digitos)

if longitud != 0:
	for x in range (0, longitud):
		resultado = resultado + '0'

for i in range (0, len(digitos)):
		resultado = resultado + str(digitos[i])

print boletos, resultado