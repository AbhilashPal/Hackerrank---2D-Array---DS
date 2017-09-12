#input
M=[]
n=int(raw_input(""))
for i in range(n):
    L=map(int,raw_input().split())
    M.append(L)
m=M[0][0]+M[0][1]+M[0][2]+M[1][1]+M[2][0]+M[2][1]+M[2][2]
for i in range(n-2):
    for j in range(n-2):
        k=(i,j)
        mm=M[i][j]+M[i][j+1]+M[i][j+2]+M[i+1][j+1]+M[i+2][j]+M[i+2][j+1]+M[i+2][j+2]
        if mm>m:
            m=mm

print m
