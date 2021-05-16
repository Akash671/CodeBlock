def removeDuplicate(s):
	#s=set(str)
	#s="".join(s)
	#print("Without Order:",s)
	t=""
	for i in s:
		if(i in t):
			pass
		else:
			t=t+i
	print(t)
	
s=str(input())
removeDuplicate(s)
