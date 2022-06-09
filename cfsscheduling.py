


class cfs():
    def exe(self):
        p=[8,4,16,4]
        timeslice=4
        count=len(p)
        temp=0

        while(len(p)!=0):
            
            i=0
            while i<len(p):
               
                print("p",p[i])
                j=0
                while(j!=len(p)):
                    if(len(p)==0):
                        temp=1
                        break
                    
                    if(j<len(p) and p[j]==0):
                        print(p[j])
                        count-=1
                        print("count",count)
                        p.remove(p[j])
                    j+=1   
                if(i<len(p) and p[i]!=0):
                    p[i]-=timeslice//count
                print(p)  
            i+=1
                

            '''if(p[i]!=0):
                    print("tq",int(timeslice/count))
                    p[i]-=(int(timeslice/count))'''         
            
        

c = cfs()
c.exe()

