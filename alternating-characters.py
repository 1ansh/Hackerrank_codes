t=int(raw_input())
for j in range(t):
    s=raw_input().strip()
    l=len(s)
    count=0
    for i in range(l-1):
        if(s[i]==s[i+1]):
            count+=1
    print(count)
