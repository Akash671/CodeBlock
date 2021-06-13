n=str(input())
ans=""
for i in n:
   if 9-int(i)<int(i):
      ans+=str(9-int(i))
   else:
      ans+=i
print(ans)
