"""
author : @akash
github : https://www.github.com/Akash671
"""

def solve():
  n=int(input())
  ans1=0
  ans2=0
  for i in range(1,n+1):
     if i%2==0:
        ans1+=i
     else:
       ans2+=i
  print(ans1-ans2)
for _ in range(int(input())):
   solve()
