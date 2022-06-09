class MyQueue():
    def __init__(self,size):
        self.queue=[]
        self.f=0
        self.r=-1
        self.max_queue_size=size
        for i in range(0,self.max_queue_size):
            self.queue.append(None)
        self.sz=0

    def isEmpty(self):
        return (self.sz==0)

    def size(self):
        return (self.sz)
        
    def enqueue(self,value):
        if(self.size()==self.max_queue_size):
            print("queue full exception")
            return
        else:
            self.r=(self.r+1)% self.max_queue_size
            self.queue[self.r] = value
            self.sz+=1
            self.printQueue()
            return
    
    def dequeue(self):
        if self.size()==0:
            print("queue empty exception")
        else:
            obj=self.queue[self.f]
            self.queue[self.f]=None
            self.f=(self.f+1)%self.max_queue_size
            self.sz=self.sz-1
            return obj
    
    def front(self):
        if self.size()!=0:
            return self.queue[self.f]
        else:
            print("queue empty exception")

    def printQueue(self):
        if self.isEmpty():
            print("queue empty")
        else:
            for i in range(self.max_queue_size):
                if self.queue[i]!=None:
                    print(self.queue[i],end=" ")
                
                print(" ")

q1=MyQueue(5)
q1.isEmpty()
q1.enqueue(1)
q1.enqueue(5)
q1.enqueue(6)
q1.enqueue(2)
q1.dequeue()
q1.printQueue()
q1.size()