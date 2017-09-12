L=map(int,raw_input().split())
n=L[0]#length of list
k=L[1]#Kueries
M=[]
lastans=0
for i in range(n):
    L=[]
    M.append(L)
for i in range(k):
    L=map(int,raw_input().split())
    a=L[0]
    b=L[1]
    c=L[2]
    if a==1:
        key=(b^lastans)%n
        M[key].append(c)
    else:
        key=(b^lastans)%n
        elesize=c%len(M[key])
        lastans=M[key][elesize]
        print lastans
