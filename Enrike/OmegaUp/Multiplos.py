#Link: https://omegaup.com/arena/problem/multiplos_si_o_no#problems

entrada = raw_input() #Lee una unica linea
numeros = entrada.split(" ") #Separa ambos enteros y los guarda en un arreglo
a = int(numeros[0]) #Obtiene el primero entero, guardado en el arreglo
b = int(numeros[1])

if(a % b == 0 or b % a == 0):
	print "multiplos"
else:
	print "no multiplos"