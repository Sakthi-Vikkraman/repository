import sys

class MinHeap:
    def __init__(self,maxsize):
        self.maxsize=maxsize
        self.size=0
        self.Heap=[0]*(self.maxsize +1)
        self.Heap[0]=-1*sys.maxsize
        self.FRONT=1

    def parent(self,pos):
        return pos//2 

    def leftchild(self,pos):
        return (2*pos)

    def rightchild(self,pos):
        return (2*pos)+1

    def swap(self,fpos,spos):
        self.Heap[fpos],self.Heap[spos]=(self.Heap[spos],self.Heap[fpos])

    def isleaf(self,pos):
        if pos>=(self.size//2) and pos<=self.size:
            return True
        return False
    
    def maxheapify(self,pos):
        if not self.isleaf(pos):
            if(self.Heap[pos]>self.Heap[self.leftchild(pos)] or self.Heap[pos]>self.Heap[self.rightchild(pos)]):
                if(self.Heap[self.leftchild(pos)]<self.Heap[self.rightchild(pos)]):

                    self.swap(pos,self.leftchild(pos))
                    self.maxheapify(self.leftchild(pos))
                else:
                    self.swap(pos,self.rightchild(pos))
                    self.maxheapify(self.rightchild(pos))
        
    def insert(self, element):
          
        if self.size >= self.maxsize:
            return
        self.size += 1
        self.Heap[self.size] = element
  
        current = self.size
  
        while (self.Heap[current] < 
               self.Heap[self.parent(current)]):
            self.swap(current, self.parent(current))
            current = self.parent(current)

    def print(self):
        for i in range(1,(self.size//2)+1):
            print("parent:"+str(self.Heap[i])+" leftchild:"+str(self.Heap[2*i])+" rightchild:"+str(self.Heap[2*i+1]))
    
    def remove(self):
        popped = self.Heap[self.FRONT]
        self.Heap[self.FRONT]=self.Heap[self.size]
        self.size-=1
        self.maxheapify(self.FRONT)
        
        return popped


# Driver Code
if __name__ == "__main__":
	
	print('The minHeap is ')
	minHeap = MinHeap(15)
	minHeap.insert(5)
	minHeap.insert(3)
	minHeap.insert(17)
	minHeap.insert(10)
	minHeap.insert(84)
	minHeap.insert(19)
	minHeap.insert(6)
	minHeap.insert(22)
	minHeap.insert(9)

	minHeap.print()
	print("The Min val is " + str(minHeap.remove()))
