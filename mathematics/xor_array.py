n=int(input())
a=[]
for i in range(n):
    item=int(input())
    a.append(item)
ans=0
max_xor=[]
for i in range(n):
      for j in range(n):
         if(j!=i):
            ans=ans^a[j]
      max_xor.append(ans)
print(max(max_xor))
