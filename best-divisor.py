def sum_digits(n):
   r = 0
   while n:
       r, n = r + n % 10, n // 10
   return r
n=int(input())
list1=[]
list2=[]
list3=[]
count=0
for i in range (1,(n+1)):
    if(n%i==0):
        list1.append(i)
        list2.append(sum_digits(i))
m=max(list2)
for k in range(len(list2)):
    if(list2[k]==m):
        count+=1
    if(count==1):
        l=list2.index(m)
        break;
print (list2)
    
    
