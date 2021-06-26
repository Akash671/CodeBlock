"""
author : @akash kumar
github : https://github/Akash671
"""


def subarray(st,s):
   if len(s)==0:
      return 0
   if s not in st:
      st.add(s)

      for i in range(len(s)):
        t=list(s).copy()
        t.remove(s[i])
        t=''.join(t)
        subarray(st,t)
   return 

if __name__=="__main__": 
   n=int(input())
   s=str(input())
   st=set()
   subarray(st,s)
   for i in st:
     print(i)
   
   
