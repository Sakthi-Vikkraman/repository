#include <iostream>
#include<string>
using namespace std;

template<class T>
class SLList {
protected:
	class Node {
	public:
		T element;
		Node *next;
		Node(T x) {
		    //@start-editable@

			element = x;
		    next = NULL;
			
			//@end-editable@
		}
	};
	Node *head;
	Node *tail;
	int n;

public:
	SLList() {
		n = 0;
		head = tail = NULL;
	}

	bool isEmpty(){
		//@start-editable@

		if(head ==NULL && tail == NULL){
		    return true;
		}
		else {
		    return false;
		}
		
		
		//@end-editable@
	}

	int size() {
	    //@start-editable@

	    return n;
	    
	    
	    //@end-editable@
	}

	bool insertLast(T x) {
	    //@start-editable@

	Node* newNode = new Node(x);
	if(n==0){
	    head=tail=newNode;
	    n+=1;
	}
	else {
	    tail->next = newNode;
	    tail = newNode;
	    n+=1;
	}
		
		
		
		//@end-editable@
		return true;
	}
    
    T insertAfter(Node node,Node newNode) {
		Node* newNode = new Node(x);
		newNode.next = node.next;
		node.next = newNode;
	}

	T insertFirst(T x) {
	    //@start-editable@

	Node* newNode = new Node(x);
	if(n==0){
	    head=tail=newNode;
	    n+=1;
	}
	else {
	    newNode->next = head;
	    head = newNode;
	    n+=1;
	}
		
		
		
		//@end-editable@
		return x;
	}

	T removeLast() {
	    //@start-editable@

	int x=0;
	Node* ptr;
	Node* temp;
	if(isEmpty()){
	    cout<<"EmptyException"<<endl;
	}
	else if(n==1) {
	    temp = head;
	    head= head->next;
	    delete temp;
	    n-=1;
	}
	else {
	    ptr = head;
	    temp=head->next;
	    while(temp->next != NULL){
	        ptr=ptr->next;
	        temp=temp->next;
	    }
	    ptr->next = NULL;

	    delete temp;
	    tail = ptr;
	    n-=1;
	}
		
		
		
			//@end-editable@
			return x;
		
		
	}

	T removeFirst() {
	    //@start-editable@

	int x=0;
	Node* temp;
	if(isEmpty()){
	    cout<<"EmptyException"<<endl;
	}
	else {
	    temp = head;
	    head= head->next;
	    delete temp;
	    n-=1;
	}
		
		//@end-editable@
		return x;
	}
//Prints the list
	void printlist(){
		if (!isEmpty()) {
			Node *temp = head;
			while (temp != NULL) {
				cout << temp->element << " ";
				temp = temp->next;
			}
			cout << endl;
			return;
		}
		cout << ("List is empty!")<<endl;
	}

};

//Driver Code
int main(){
	SLList<int> slist1;
 	string noOfInputs,str;
 	getline(cin, noOfInputs);
 	for(int i=0;i<stoi(noOfInputs);i++){
 	    getline(cin, str); 
 	    
 	    if (str.substr(0, 2) == "IF"){
 	        int value = stoi(str.substr(3, 5));
 	        slist1.insertFirst(value);
 	        slist1.printlist();
 	    }
 	    else if (str.substr(0, 2) == "IL"){
 	        int value = stoi(str.substr(3, 5));
 	        slist1.insertLast(value);
 	        slist1.printlist();
 	    }
 	    else if (str.substr(0, 2) == "DF"){
 	        slist1.removeFirst();
 	        slist1.printlist();
 	    }
 	    else if (str.substr(0, 2) == "DL"){
 	        slist1.removeLast();
 	        slist1.printlist();
 	    }
 	    else if (str.substr(0, 1) == "S"){
 	       cout<< slist1.size()<<endl;
 	    }
 	    else if (str.substr(0,1) == "I"){
 	        //cout<<slist1.isEmpty()<<endl;
 	        if(slist1.isEmpty()){
 	            cout<<"True"<<endl;
 	        }
 	        else{
 	            cout<<"False"<<endl;
 	        }
 	    }
 	}
}