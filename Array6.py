L=map(int,raw_input().split())
n=L[0]
m=L[1]
M=[]
for i in range(n+1):
	M.append(0)
for i in range(m):
	L=map(int,raw_input().split())
	a=L[0]    #lower range
	b=L[1]    #upper range
	k=L[2]    #change
	M[a]+=k   #ath element stores the change from a-1th to ath element = +k
	if(b+1<=n):
		M[b+1]-=k   	#after the range of changes, the change to the next element = -k
x=0	# will store the cumulative element values
max=0	# will store the maximum value that x obtains at any point of time through the iteration
for i in M:
	x+=i
	if(x>max):
		max=x	# update max
print max
