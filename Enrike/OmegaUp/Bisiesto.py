#Link: https://omegaup.com/arena/problem/1-Bisiesto-sencillo#problems
year = input()

if(year % 4 == 0 and year % 100 != 0):
	print "S"
elif (year % 100 == 0 and year % 400 == 0):
	print "S"
else:
	print "N"
	