"""
author : @akash kumar
github : https://github/Akash671
"""

def solve():
   #n,m=map(int,input().split())
   n=int(input())
   a=list(map(int,input().split()[:n]))
   #s=str(input())
   #a,b=input().split()
   #1 2 3 1
   #1 2 3 4 5
   if n==1:
      print(a[0])
   elif n==2:
     print(0)
   else:
    oddsum=0
    evensum=0
    for i in range(n):
      if i%2==0 and a[i]>0:
        evensum+=a[i]
      elif a[i]>0:
        oddsum+=a[i]
    print(max(oddsum,evensum))
for _ in range(int(input())):
    solve()
   
   
   
