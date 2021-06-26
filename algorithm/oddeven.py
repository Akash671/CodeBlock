ans=[]
for i in range(int(input()),0,-1):
   if i%2!=0:
     print(i)
   else:
     ans.append(i)

for i in range(len(ans)):
   print(ans[len(ans)-1-i])
   
  
