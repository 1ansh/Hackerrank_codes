import math
t=int(input())
for i in range(t):
    count=0
    a,b=raw_input().split()
    a=int(a)
    b=int(b)
    c=math.sqrt(a)
    d=math.sqrt(b)
    e=int(math.floor(d)-math.ceil(c)+1)
    print(e)
