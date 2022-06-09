class SLList():
    class node():
        def __init__(self,data):
            self.element=data
            self.next=None

    def __init__(self):
        self.head=self.node(None)
        self.size=0

    def isEmpty(self):
        if self.size==0:
            return True
        else:
            return False
    
    def insertFirst(self,data):
        newNode=self.node(data)
        if self.size==0:
            self.head.element=newNode.element
        else:
            newNode.next=self.head
            self.head=newNode
        self.size+=1

    def insertLast(self,data):
        newNode=self.node(data)
        if self.size==0:
            self.head.element=newNode.element
        else:
            currentNode=self.head
            while( currentNode.next!= None):
                currentNode=currentNode.next
            currentNode.next=newNode
        self.size+=1

    def insertAfter(self,u,v):
        x=self.node(u) 
        y=self.node(v) 
        f=0 
        currrentNode=self.head 
        while currrentNode==None: 
            if currrentNode.element ==u: 
                f+=1 
                currrentNode.next=y
                y.next=currrentNode.next 
                break 
            else: 
                currrentNode=currrentNode.next 
        if f==0: 
            print("Element Not Found") 
        return 

    def printList(self):
        if self.isEmpty():
            print("List is Empty")
        else:
            currentNode=self.head
            while(currentNode!=None):
                print(currentNode.element,end=" ")
                currentNode=currentNode.next
            print(" ")
    
    def deleteFirst(self):
        if self.isEmpty():
            print("list is Empty")
        else:
            if self.head.next==None:
                self.head.element=None
            else:
                currentNode=self.head
                while(currentNode.next.next):
                    currentNode=currentNode.next
                temp=self.head
                self.head=self.head.next
                del temp
        self.size-=1
    
    def deleteLast(self):
        if self.isEmpty():
            print("First is Empty")
        else:
            if self.head.next==None:
                self.head.element=None
            else:
                currentNode=self.head
                while(currentNode.next.next!=None):
                    currentNode=currentNode.next
                temp=self.head
                self.head=self.head.next
                del temp
        self.size-=1

    def listSize(self):
        return self.size


sll = SLList()
print(sll.isEmpty())
sll.insertFirst(10)
sll.insertFirst(20)
sll.insertFirst(30)
sll.insertLast(40)
sll.insertLast(50)
sll.insertLast(60)
sll.printList()
print(sll.listSize())
sll.deleteFirst()
sll.deleteLast()
sll.printList()
sll.insertAfter(10,22)
sll.printList()
print(sll.listSize())
print(sll.isEmpty())
    

