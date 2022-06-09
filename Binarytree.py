class node():
    def __init__(self,key):
        self.key=key
        self.left=None
        self.right=None
        self.lheight=0
        self.rheight=0
        '''self.edge=[]
        count=0'''

    def insert(self,value):
        if value>self.key:
            if self.right!=None:
                self.right.insert(value)
            else:
                self.right = node(value)
        else:
            if self.left!=None:
                self.left.insert(value)
            else:
                self.left=node(value)

    def postorder(self):
        if self.left!=None:
            self.left.postorder()
        if self.right!=None:
            self.right.postorder()
        print(self.key)
    
    def preorder(self,parent):
        print(self.key)
        if self.left!=None:
            self.left.preorder(parent)
        if self.right!=None:
            self.right.preorder(parent)
        
    
    def inorder(self):
        if self.left!=None:
            self.left.inorder()

        print(self.key)
        if self.right!=None:
            self.right.inorder()
        '''if self.right==None and self.left==None:
            self.edge.append(self.key+1)
            print("key:",self.key+1)'''


    def find(self, value):
        if self.key == value:
            print("found ",value)
        elif self.key < value:
            self.right.find(value)
        elif self.key > value:
            self.left.find(value)

    def deletenode(self, value):
        if self.key == value:
            print("deleted ",value)
            self.key = self.swap()
        elif self.key < value:
            self.right.deletenode(value)
        elif self.key > value:
            self.left.deletenode(value)

    def swap(self):
        while True:
            if self.left == None:
                if self.right == None:
                    return self.key
                else:
                    self = self.right
            else:
                self = self.left

    def height(self):
        if self.left!=None:
            self.lheight=self.left.height()   
        if self.right!=None:
            self.rheight=self.right.height()
        if self.lheight>self.rheight:
            return self.lheight+1
        else:
            return self.rheight+1

r1=node(12) 
parent=r1.key 
r1.insert(23) 
r1.insert(1) 
r1.insert(5) 
r1.insert(4) 
r1.insert(78) 
r1.insert(10) 
print("postfix:") 
r1.postorder() 
print("infix:") 
r1.inorder()
print("prefix:") 
r1.preorder(parent) 
r1.find(4)
r1.deletenode(4) 
print("postdisplay:")
r1.postorder()
print("height:",r1.height())