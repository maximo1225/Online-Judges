# your code goes here
def sum(n):
	suma = 0
	while(n>0):
		suma += n%10
		n /= 10;
	return suma

n = int(raw_input())
while(n):
	digits = abs(int(raw_input()))
	print sum(digits)
	n = n-1
