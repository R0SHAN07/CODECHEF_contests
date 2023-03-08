from tkinter import N


t=int(input())
n=int(input())
o=0
arr=[]
for i in range(n):
    k=int(input())
    arr.append(k)
for i in arr:
    for j in arr:
        m=i*j
        if(i*j>=0):
            o=0
        else:
            o=1
print(m)

