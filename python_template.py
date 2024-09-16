# Author : SONIC 
t = int(input())

for _ in range(t):
	n,m= map(int, input().split())
	v =  max(map(int, input().split()))
	
	for _ in range(m):
		c,l,r = input().split()
		l = int(l)
		r = int(r)
		
		if (l<= v <= r):
			if c == '+':
				v+=1
			else:
				v-=1
			
		print(v, end = ' ' if _ != m-1 else '\n')