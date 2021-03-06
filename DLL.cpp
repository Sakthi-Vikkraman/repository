#include <iostream>
#include<string>
#include <sstream>
using namespace std;

template<class T>
class DLList {
public:
	class Node {
	public:
		T element;
		Node *next;
		Node *prev;
		Node(T x) {
		    //@start-editable@

			element = x;
			next = NULL;
			prev = NULL;
			
			//@end-editable@
		}
	};
	Node *head;
	Node *tail;
	int n;
public:
	DLList() {
		n = 0;
		head = tail = NULL;
	}

	bool isEmpty(){
		//@start-editable@

		
		if(head == NULL && tail == NULL)
		return true;
		else
		return false;
		
		//@end-editable@
	}

	int size() {
	    //@start-editable@

	    return n;
	    
	    
	    //@end-editable@
	}

	bool insertLast(T x) {
	    //@start-editable@

		Node *y = new Node(x);
		if(n==0)
		{
		    head = y;
		    tail = y;
		    n++;
		}
		else
		{
		
		n++;
		tail->next = y;
		y->prev=tail;
		tail = y;
		}
		
		
		
		
		//@end-editable@
		return true;
	}

	T insertFirst(T x) {
	    //@start-editable@

			Node *y = new Node(x);
		
		if(head == NULL and tail == NULL)
		{
		    head = y;
		    tail = y;
		    n++;
		   
		}
		else
		{
		    n++;
		    y->next = head;
		    head->prev = y;
		    head = y;
		   
		}
		
		
		
		
		//@end-editable@
		return x;
	}

	T deleteLast() {
	    T x;
	    //@start-editable@

		if(n==0)
		return x;
		else if(head == tail)
		{
		    head = NULL;
		    tail = NULL;
		    n=0;
		}
		else
		{
		    n--;
		    Node *temp = tail->prev;
		    tail->prev = NULL;
		    temp->next = NULL;
		    tail = temp;
		}
		
		
		//@end-editable@
		return x;
		
		
	}

	T deleteFirst() {
	    	    T x;
	    //@start-editable@

		
		if(head == NULL)
		{
		    return x;
		}
		else if(head == tail)
		{
		    head = NULL;
		    tail = NULL;
		    n=0;
		}
		else
		{
		    Node *temp = head->next;
		    head->next = NULL;
		    temp->prev = NULL;
		    head = temp;
		    n--;
		}
		
		
		
		
		//@end-editable@
		return x;
	}

	//insert a node with value u after the node containing value v
    T insertAfter(T u,T v){
        	    T x;
    	//@start-editable@

		
		if(head == NULL)
		return x;
		Node *temp = head;
		bool check = false;
		while(temp->next !=NULL)
		{
		    if(temp->element == v)
		    {
		        check = true;
		        break;
		    }
		    temp = temp->next;
		}
		if(check == true){
		   
		Node *y = new Node(u);
		y->next = temp->next;
		temp->next->prev = y;
		temp->next = y;
		y->prev = temp;
		n++;
		}
		else
		{
		    cout<<"Node to insert after not found\n";
		    return false;
		}
		
		
		
		
		//@end-editable@
    	return true;
    }
    

    //insert a node with value u before the node containing value v

    T insertBefore(T u,T v){
    	//@start-editable@

		
		
	if(head == NULL)
		return false;
		Node *temp = head;
		bool check = false;
		while(temp->next !=NULL)
		{
		    if(temp->element == v)
		    {
		        check = true;
		        break;
		    }
		    temp = temp->next;
		}
		if(check == true){
		Node *y = new Node(u);
		y->next = temp;
		y->prev = temp->prev;
		temp->prev->next = y;
		temp->prev = y;
		n++;
		}
		else
		{
		    cout<<"Node to insert before not found\n";
		    return false;
		}
		
		
		
		
		
		//@end-editable@
    	return true;
    }

    //delete the node after the node containting value u
    T deleteAfter(T u){
    	//@start-editable@

	
	if(head == NULL && tail == NULL)
		return false;
		Node *temp = head;
		while(temp!=NULL)
		{
		    if(temp->element == u)
		    {
		        Node *temp2 = temp->next;
		        temp->next = temp2->next;
		        temp2->next->prev = temp;
		        temp2->next = NULL;
		        temp2->prev = NULL;
		        n--;
		        return true;
		        
		    }
		    temp=temp->next;
		}
		return false;
		
		
		
		//@end-editable@

    }
    
	//delete the node before the node containting value u
    T deleteBefore(T u){
    	//@start-editable@

        if(head == NULL)
     {
         
         return false;
     }
     else if(head->element == u)
     {
         
         return false;
     }
     else
     {
         Node *temp = head;
         while(temp->next!=NULL)
         {
             if(temp->element == u)
             {
                 Node *fake = temp->prev;
                 if(temp->next == NULL)
                 {
                     fake->next = NULL;
                     temp->prev = NULL;
                     
                 }
                 else
                 {
                     fake->next = temp->next;
                    
                     temp->next->prev = fake;
                    
                     
                 }
             }
             temp = temp->next;
         }
     }
        
		return false;
		
		
		
		//@end-editable@

    }

    T getHead() {
    	//@start-editable@

		
		
		return head->element;
		
		
		//@end-editable@

    }

    T getTail() {
    	//@start-editable@

		
		return tail->element;
		
		
		
		//@end-editable@

    }

    Node* findNode(T val){
        Node *temp=NULL;
    	//@start-editable@

		
		temp = head;
		while(temp->next!=NULL)
		{
		    if(temp->element == val)
		    return temp;
		    temp = temp->next;
		}
		temp = NULL;
		
		
		
		//@end-editable@
    	return temp;
    }

    //swap the nodes containing u and v
    void swap(T u,T v){
    	//@start-editable@

		
		Node *temp = head;
		Node *temp2 = head;
		if(temp == NULL)
		;
		else
		{
		    while(temp->next!=NULL)
		    {
		        if(temp->element == u)
		        break;
		        temp=temp->next;
		    }
		    while(temp2->next!=NULL)
		    {
		        if(temp2->element == v)
		        break;
		        temp2=temp2->next;
		    }
		    T el = temp->element;
		    temp->element = temp2->element;
		    temp2->element = el;
		}
		
		
		
		//@end-editable@

    	
    }
     
	//Prints the list
	void printlist(){
		if (!isEmpty()) {
			Node *temp = head;
			while (temp != NULL) {
				cout << temp->element << "->";
				temp = temp->next;
			}
			cout << endl;
			temp = tail;
			while (temp != NULL) {
				cout << temp->element << "->";
				temp = temp->prev;
			}
			cout << endl;
			return;
		}
		cout << ("Linked List Empty Exception")<<endl;
	}

};

int getValue(string s, int pos) {
    istringstream iss(s);
    string temp;
    iss>>temp;
    iss>>temp;
    if(pos==1) {
        return stoi(temp);
    }
    else {
        iss>>temp;
        return stoi(temp);
    }
}
//Driver Code
int main(){
	DLList<int> dlist1;
 	string noOfInputs,str;
 	getline(cin, noOfInputs);
 	for(int i=0;i<stoi(noOfInputs);i++){
 	    getline(cin, str); 
 	    
 	    if (str.substr(0, 2) == "IF"){
 	        int value = getValue(str, 1);
 	        dlist1.insertFirst(value);
 	        dlist1.printlist();
 	    }
 	    else if (str.substr(0, 2) == "IL"){
 	        int value = getValue(str, 1);
 	        dlist1.insertLast(value);
 	        dlist1.printlist();
 	    }
 	    else if (str.substr(0, 2) == "DF"){
 	        dlist1.deleteFirst();
 	        dlist1.printlist();
 	    }
 	    else if (str.substr(0, 2) == "DL"){
 	        dlist1.deleteLast();
 	        dlist1.printlist();
 	    }
 	    else if (str.substr(0, 2) == "IA"){
 	        int value1 = getValue(str, 1);
 	        int value2 = getValue(str, 2);
 	        dlist1.insertAfter(value1,value2);
 	        dlist1.printlist();
 	    }
 	    else if (str.substr(0, 2) == "IB"){
 	        int value1 = getValue(str, 1);
 	        int value2 = getValue(str, 2);
 	        dlist1.insertBefore(value1,value2);
 	        dlist1.printlist();
 	    }
		else if (str.substr(0, 2) == "DA"){
 	        int value = getValue(str, 1);
 	        dlist1.deleteAfter(value);
 	        dlist1.printlist();
 	    }
 	    else if (str.substr(0, 2) == "DB"){
 	        int value = getValue(str, 1);
 	        dlist1.deleteBefore(value);
 	        dlist1.printlist();
 	    }
 	    else if (str.substr(0, 1) == "L"){
 	       cout<< dlist1.getTail()<<endl;
 	    }
 	    else if (str.substr(0, 4) == "FIND"){
 	       int value1 = getValue(str, 1);
 	       DLList<int> :: Node *temp = dlist1.findNode(value1);
 	       if (temp!=NULL){
 	       	cout<<temp->element<<endl;
 	       }
 	       else{
 	       	cout<<"NULL"<<endl;
 	       }
 	    }
 	    else if (str.substr(0, 1) == "F"){
 	       cout<< dlist1.getHead()<<endl;
 	    }
 	    else if (str.substr(0, 2) == "SW"){
 	       int value1 = getValue(str, 1);
 	       int value2 = getValue(str, 2);
 	       dlist1.swap(value1,value2);
 	       dlist1.printlist();
 	    }
 	    else if (str.substr(0, 1) == "S"){
 	       cout<< dlist1.size()<<endl;
 	    }
 	    else if (str.substr(0,1) == "I"){
 	        //cout<<slist1.isEmpty()<<endl;
 	        if(dlist1.isEmpty()){
 	            cout<<"True"<<endl;
 	        }
 	        else{
 	            cout<<"False"<<endl;
 	        }
 	    }
 	}
}