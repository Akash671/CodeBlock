def solve():
   n=int(input())
   a=list(map(int,input().split()[:n]))
   s=0
   for i in range(n):
      s+=a[i]
   print(s)
for _ in range(int(input())):
     solve()
