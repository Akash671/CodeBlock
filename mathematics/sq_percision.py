#author : @akash

n=int(input())
p=int(input())
import math
ans=math.sqrt(n)
ans=round(ans,p+1)
if p==1:
   ans=ans*100
elif p==2:
   ans*=1000
elif p==3:
   ans*=10000
else:
   ans*=100000
ans=ans//10
if p==1:
  ans=ans/10
elif p==2:
   ans=ans/100
elif p==3:
   ans=ans/1000
else:
   ans=ans/10000
print(ans)
