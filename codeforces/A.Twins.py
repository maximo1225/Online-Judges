# your code goes here
n = int(raw_input())
arr = sorted(map(int, raw_input().split(" ")))
left = 0
ans = 0
while sum(arr) >= left:
	left += arr.pop()
	ans += 1
	
print ans