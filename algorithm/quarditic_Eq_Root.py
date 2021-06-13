a,b,c=map(int,input().split())
ans=b**2-4*a*c
if ans>0 and a!=0:
   root1=int((-b+ans**0.5)//(2*a))
   root2=int((-b-ans**0.5)//(2*a))
   print("Real and Distinct")
   print(min(root1,root2),end=" ")
   print(max(root1,root2))
elif ans==0 and a!=0:
  print("Real and Equal")
  root=(-b+ans**0.5)//(2*a)
  print(int(root))
else:
  print("Imaginary")
