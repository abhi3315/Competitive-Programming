n=int(input())
a=list(map(int,input().split()))
for i in range(len(a)):
    for j in range(len(a)-i):
           if a[i]>a[i+1]:
               a[i],a[i+1]=a[i+1],a[i]
print(*a) #pythonic approach
