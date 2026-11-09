#include<iostream>
using namespace std;
class Node{
	public:
		int value;
		Node* next;
		
		Node(int value){
			this->value = value;
			next = NULL;
		}
};
class Linkedlist{
	
	public:
		
		Node* head;
		Node* tail;
	Linkedlist(){
		head = tail = NULL;
	}
	
	void push_front(int val){
		
		Node* newNode = new Node(val);//ek heap me memory allocate hua hai jis ka address 
		//newNode name ke variable me store ho rha hai
		
		if(head == NULL){
			head = tail = newNode;
			return ;
		}
		
		newNode->next = head;
		head = newNode;
		
	void print(){
		Node* temp = head;
		if(head->next = NULL){
			cout<<"the linkedlist is empty";
		}
		while(tail == NULL){
			cout<<temp->value;
			temp = temp->next
		}
	}
		
	}	
		
};
int main(){
	Linkedlist l1;
	l1.push_front(50);
	
	
	
	return 0;
}
