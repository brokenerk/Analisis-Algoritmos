#Link: https://omegaup.com/arena/problem/El-problema-de-los-Multiplos#problems 
N = input()
total = 0

for i in range (1, N):
	if(i % 3 == 0 or i % 5 == 0):
		total = total + i

print int(total)