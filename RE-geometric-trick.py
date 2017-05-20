import math
n=int(input())
s=input()
count=0
an=[]
bn=[]
cn=[]
ansa=[]
ansb=[]
ansc=[]
for i in range(n):
    if(s[i]=='a'):
        an.append(i)
        bn.append(-1)
        cn.append(-1)
    if(s[i]=='b'):
        an.append(-1)
        bn.append(i)
        cn.append(-1)
    if(s[i]=='c'):
        an.append(-1)
        bn.append(-1)
        cn.append(i)
for i in range(n):
    if(an[i]!=-1):
        for j in range(n):
            if(cn[j]!=-1):
                gm=(math.sqrt((an[i]+1)*(cn[j]+1)))
                if(math.ceil(gm)==math.floor(gm) and int(gm-1) in bn):
                    ansa.append(i)
                    ansb.append(int(gm-1))
                    ansc.append(j)
                    count+=1
print(count)
