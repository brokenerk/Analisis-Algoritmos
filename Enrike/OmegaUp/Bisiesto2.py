#Link: https://omegaup.com/arena/problem/bisiesto#problems
N = input()
year = []
for i in range(0, N):
	y = input()
	year.append(y)

for i in range(0, N):
	if(year[i] % 4 == 0 and year[i] % 100 != 0):
		print "S"
	elif (year[i] % 100 == 0 and year[i] % 400 == 0):
		print "S"
	else:
		print "N"
	