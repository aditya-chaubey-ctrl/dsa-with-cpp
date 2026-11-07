#include<iostream>
using namespace std;
class Node{
	public:
		int value;
		Node* next;
		Node* pre;
		
		Node(int value){
			this->value = value;
			next = pre = NULL;
		}
};
class DoublyLinkedlist{
	public:
		Node* head;
		Node* tail;
		Node* pre;
		
		DoublyLinkedlist(){
			head = tail = NULL;
		}
		
		void push_front(int val){
			Node* newNode = new Node(val);
			if(head == NULL){
				head = tail = newNode;
			}
			else{
				newNode->next = head;
				head->pre = newNode;
				head = newNode;
			}
		}
		void push_back(int val){
			Node* newNode = new Node(val);
			if(head == NULL){
				head = tail = newNode;
				return ;
			}
			
			Node* temp = head;
			while(temp->next != NULL){
				temp = temp->next;
			}
			temp->next = newNode;
			newNode->next = NULL;
			newNode->pre = tail;
			tail = newNode;
		
		}
		void print(){
			if(head == NULL){
				cout<<"Linkedlist is empty";
				return ;
			}
			
			Node* temp = head ;
			while(temp != NULL){
				cout<<temp->value<<" ";
				temp = temp->next;
			}
		}
		void pop_front(){
			Node* temp = head;
			if(head == NULL){
				cout<<"The linkedlist is empty";
				return ;
			}
			if(head->next == NULL){
				head = tail = NULL;
                delete temp;
                return;	
			}
			head = head->next;
            head->pre = NULL;
            delete temp;
		}
		void pop_back(){
			
		}	
};
int main(){
	DoublyLinkedlist d;
	d.push_front(5);
	d.push_back(6);
	d.push_front(8);
	d.push_back(15);
	d.print();
	
	return 0;
}
