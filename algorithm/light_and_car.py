"""
author : @akash kumar
github : https://github/Akash671
"""
"""
string fun:

string.replace(sub_old_string,new_sub_string,count)
string.count(your_string)
"""
mod=1000000007
def solve():
   n,m=map(int,input().split())
   #n=int(input())
   #a=list(map(int,input().split()[:n]))
   #s=str(input())
   #a,b=input().split()
   n=n%mod
   m=m%mod
   print(n**m)
for _ in range(int(input())):
   
   solve()
   
   
   
