# your code goes here

def convert(string):
	l = string.split("+")
	l.sort()
	string = ""
	for i in l:
		string += str(i)+"+"
	string = string[0:len(string)-1]
	return string
string = raw_input()
print convert(string)
