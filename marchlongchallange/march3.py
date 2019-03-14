import math
t=int(input())
for i in range (t):
    n=int(input())
    l=[]
    data={}
    count=0
    for j in range (n):
        seta=set(input())
        seta=list(seta)
        seta=sorted(seta)
        seta=''.join(seta)
        if seta in data:
            data[s]+=1
        else:
            data[s]=1
    l = list(data.keys())
    n=len(l)
    for j in range (n):
        if(data[l[j]]-1>0  and len(l[j])==5):
            count=int(count+((data[l[j]]*(data[l[j]]-1))/2))
        for k in range (j+1,n):
            s=set(l[j]+l[k])
            if(len(s)==5):
                count=count+(data[l[j]]*data[l[k]])
    print(count)
