for _ in range(int(input())):
    # function to generate all the sub lists
    def sub_lists (l):
        lists = [[]]
        for i in range(len(l) + 1):
          for j in range(i):
            lists.append(l[j: i])
        return lists
    n=int(input())
    a=list(map(int,input().split()[:n]))
    ans=sub_lists(a)
    c=0
    for i in range(1,len(ans)):
        if(sum(ans[i])%n==0):
           #print(ans[i])
           c+=1
    print(c)
