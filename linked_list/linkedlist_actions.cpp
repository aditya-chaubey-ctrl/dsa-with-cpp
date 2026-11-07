#include<iostream>
using namespace std;
class Node{
	public:
		int value;
		Node* next; //Node* ka matlab hai Node ka address store karne wala pointer(next).
		//next mein hum next node ka address rakhenge

		
		Node(int value){
			this->value = value;
			next = NULL;
		}
};
class linklist{
	public:
	Node* head;  // head ek pointer hai jo first node ka address store karega
	Node* tail;  // last vale node ka address store kra rhe hai tail pointer me
	
	linklist(){
		head = tail = NULL;
	}
	
	void push_front(int val){
		Node* newNode = new Node(val);  // new Node(val) Heap memory mein ek new Node create karta ha
		//Node* newNode us naye Node ka address store karega
		
		
		if(head == NULL){
			head = tail = newNode;
			return ;
		}
		else{
			newNode->next = head;
			head = newNode;
		}
	}
	void push_back(int val){
		Node* newNode = new Node(val);
		if(head == NULL){
			head = tail = newNode;
		}
		else{
			tail->next = newNode;
			tail = newNode;
		}
	}
	void print(){
		Node* temp = head;
		while(temp != NULL){
			cout<<temp->value<<" ";
			temp = temp->next;
		}
	}
	void pop_front(){
		Node*temp = head;
		if(head == NULL){
			cout<<"Empty linkedlist";
			return ;
		}
		if(head->next == NULL){
			head = NULL;
			delete head;
			return;
		}
		head = head->next;
		temp->next = NULL;
		delete temp;
	
	}
	
	void pop_back(){
		if(head == NULL){
			cout<<"Linkedlist is empty";
			return;
		}
		if(head->next == NULL){
			head->next = NULL;
			delete head;
			
		}
		Node*temp = head;
		
		while(temp->next->next != NULL){
			temp = temp->next;
		}
		tail = temp;
		delete temp;
		temp->next = NULL;
	}
	
	void insert(int value , int pos){
		if(pos == 1){
			push_front(value);
			return;
		}
		if(pos <0){
			cout<<"Can't insert";
			return;
		}
		Node* newNode = new Node(value);
		Node* temp = head;
		for(int i =0; i<pos-1;i++){
			if(temp == NULL){
				cout<<"invalid position";
				return ;
			}
			temp = temp->next;
		}
		newNode->next = temp->next;
		temp->next = newNode;
	}
	
	int search(int val){
		Node* temp = head;
		int idx = 0;
		while(temp!= NULL){
			if(temp->value == val){
				cout<<"The element is at the index "<<idx<<endl;
			}
			temp = temp->next;
			idx = idx+1;
		}
		
	}
};
int main(){
	linklist ll;
	ll.push_front(1);
	ll.push_front(2);
	ll.push_front(3);
	ll.push_back(4);
	ll.print(); 
	cout<<endl;
	ll.pop_front();
	ll.print(); 
	cout<<endl;
//	if()
//	int result = search(3);
//	cout<<result;
	return 0;
}
