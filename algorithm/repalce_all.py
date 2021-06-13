"""n=int(input())
a=[]
while(n):
   r=n%10
   a.append(r)
   n=n//10
m=len(a)
for i in range(m):
   if a[m-1-i]==0:
      a[m-i-1]=5
for i in range(m):
  print(a[m-i-1],end="")
"""

n=str(input())
ans=""
for i in n:
   if i=='0':
      ans+='5'
   else:
     ans+=i
print(ans)
