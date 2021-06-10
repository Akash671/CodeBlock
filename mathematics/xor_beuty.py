# author : @akash 
n,q=map(int,input().split())
s=str(input())
for _ in range(q):
   ans=[]
   ss=""
   a,b=map(int,input().split())
   ss=s[a-1:b]
   #print(ss)
   dp=""
   for i in ss:
      if i not in dp:
         dp+=i
   #print("dp is: ",dp)
   for i in dp:
      #print(ss.count(i))
      ans.append(ss.count(i))
   #print(ans)
   xor_ans=0
   for i in ans:
      xor_ans=xor_ans^i
   print(xor_ans)
