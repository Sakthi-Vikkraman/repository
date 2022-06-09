pro=[[],[],[],[]]
process=["A","B","C","D"]
bt=[10,5,15,20]
a=[]
tq=1
temp=bt
timeslicing=4
i=0
count=0
vruntime=0
while max(bt)!=0:
    count=0
    a=bt
    
    for i in range(len(bt)):
        if (bt[i]>0):
            
            count+=1
            
    i=0
    
    if count>0:
        tq=int(timeslicing/count)
        vruntime+=tq
        for i in range(len(bt)):
            if(bt[i]>0):
                protemp=pro[i]
                
                protemp.append(vruntime)
                bt[i]-=tq
    print("vruntime ->"+str(vruntime))
n=0
print("Ideal fairness")
for n in range(len(pro)):
    print(process[n])
    print(pro[n])

print("----------------------------------------------------------------->")
print("                execution with respect to time                    ")