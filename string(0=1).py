import random
ten=0
one=1
t=int(input())
while(t):
    n=int(input())
    for i in range(n):
        x=random.randint(0,1)
        a=[]
        a.append(x)
    if("10" in a):
        ten+=1;
    elif("01" in a):
        one+=1
    if(ten==one):
        print(a)
        a=[]
    else:
        a=[]
        continue