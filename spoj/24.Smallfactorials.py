import math

t = raw_input()
t = int(t)

while(t):
	if t == 0: break
	n = raw_input()
	n = int(n)
	print math.factorial(n)
	t = t-1
