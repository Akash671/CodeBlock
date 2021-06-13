n,k=map(int,input().split())
a=list(map(int,input().split()[:n]))
# Python program to print all
# sublist from a given list

# function to generate all the sub lists
def sub_lists (l):
	lists = [[]]
	for i in range(len(l) + 1):
		for j in range(i):
			lists.append(l[j: i])
	return lists


print(sub_lists(a))
