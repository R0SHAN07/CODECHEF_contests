s=[]
t=int(input())
while(t):
    os=[]
    n=int(input())
    c=input()
    s.append(c)
    for j in s:
      for i in j:
        if(i=="A"):
          os.append("T")
        elif(i=="T"):
          os.append("A")
        elif(i=="G"):
          os.append("C")
        else:
          os.append("G")
        for i in os:
          fs=""
          fs=fs+i
          os.remove(j)
          
    print(fs)
    
    