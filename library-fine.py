d1,m1,y1=raw_input().split()
d1=int(d1)
m1=int(m1)
y1=int(y1)
d2,m2,y2=raw_input().split()
d2=int(d2)
m2=int(m2)
y2=int(y2)
x=0
if(y1>y2):
    x=10000
else if(y1==y2 and m1>m2):
    x=500*(m1-m2)
else if(y1==y2 and m1==m2 and d1>d2):
    x=15*(d1-d2)
print(x)
