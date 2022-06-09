class mystack():
    def __init__(self, size):
        self.s=[]
        self.max=size
        self.top=-1
        for i in range(0,self.max):
            self.s.append(None)
    
    def isempty(self):
        return (self.top<0)

    def printstack(self):
        if(self.isempty()):
            print("stack is full")
        else:
            for i in range(self.max):
                if(self.s[i]!=None):
                    print(self.s[i],end=" ")


    def push(self,item):
        self.top=self.top+1
        self.s[self.top]=item
    
    def size(self):
        return (self.top+1)


    def topelement(self):
        print(self.s[self.top])

    def pop(self):
        if(not(self.isempty())):
            self.s[self.top]=None
            self.top=self.top-1
        else:
            print("stack is empty")


s1=mystack(5)
s1.isempty()
s1.push(1)
s1.push(5)
s1.push(6)
d=s1.size()
print("size:")
print(d)
s1.printstack()
s1.topelement() 
s1.pop()
s1.pop()
s1.printstack()
s1.topelement()     