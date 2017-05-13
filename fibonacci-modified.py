Python 3.4.3 (v3.4.3:9b73f1c3e601, Feb 24 2015, 22:43:06) [MSC v.1600 32 bit (Intel)] on win32
Type "copyright", "credits" or "license()" for more information.
>>> t=[0,0,0]
t[0],t[1],n=input().split()
t[0]=int(t[0])
t[1]=int(t[1])
n=int(n)
for i in range(2,n):
    t[i]=t[i-2]+t[i-1]*t[i-1]
    t.append(0)
print(t[n-1])
