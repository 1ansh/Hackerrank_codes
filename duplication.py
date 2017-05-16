s='0'
while(len(s)<=1000):
    for j in range(len(s)):
        t=1-int(s[j])
        s=s+chr(48+t)
print(s)
q=int(input())
for i in range(q):
    x=int(input())
    k=int(s[x])
    print(k)
            
