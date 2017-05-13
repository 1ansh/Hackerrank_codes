def reverse_int(n):
    return int(str(n)[::-1])
count=0
i,j,k=raw_input().split()
i=int(i)
j=int(j)
k=int(k)
for a in range(i,j+1):
    l=(abs(a-reverse_int(a)))%k
    if(l==0):
        count+=1
print(count)

