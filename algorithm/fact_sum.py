n=int(input())
a=list(map(int,input().split()[:n]))

import math
ans=0
for i in a:
   ans+=math.factorial(i)
print(ans%107)
