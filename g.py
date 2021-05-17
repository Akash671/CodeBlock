# author : @akash

n=int(input())
a=[]
for i in range(n):
   s=str(input())
   a.append(s)
b=sorted(a)
#print(b)
for i in range(n-1):
  aa=b[i]
  bb=b[i+1]
  nn=len(aa)
  mm=len(bb)
  if(mm>nn and aa==bb[:nn]):
     t=b[i]
     b[i]=b[i+1]
     b[i+1]=t
for i in b:
   print(i)
     
