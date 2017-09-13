n=int(raw_input())
L=[]
for i in range(n):
	s=raw_input()
	L.append(s)
d=int(raw_input())
for i in range(d):
	s=raw_input()
	f=0
	for i in L:		
		if s==i:
			f+=1
	print f
