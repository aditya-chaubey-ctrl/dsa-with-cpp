#include<iostream>
using namespace std;
class Node{
	public:
	int value ;
	Node* next;
	
	Node(int value){
		this->value= value;
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
			Node* newNode = new Node(val);
			if(head == NULL){
				head = tail = newNode;
			}
			else{
				newNode->next = head;
				head = newNode;
			}
		}
		void push_back(int val){
			Node* newNode = new Node(val);
			if(head == NULL){
				head = tail = NULL;
			}
			else{
				tail->next = newNode;
				tail = newNode;
			}
		}
		void pop_front(){
			if(head == NULL){
				cout<<"Empty linkedlist";
				return;
			}
			
			Node* temp = head;
			head = head->next;
			temp->next = NULL;
			delete temp;
		}
		void pop_back(){
			if(head == NULL){
				cout<<"Empty linkedlist";
			}
			Node* temp =  head;
			while(temp->next != tail){  // or if tail nahi diya hai   while(tem->next->next != NULL
				temp = temp->next;
			}
			temp->next = NULL;
			delete tail;
			tail = temp;
		}
		void print(){
			Node* temp = head;
			while(temp != NULL){
				cout<<temp->value<<" ";
				temp = temp->next;
			}
		}
};

int main(){
	Linkedlist l1;
	l1.push_front(1);
	l1.push_front(2);
	l1.push_back(5);
	l1.pop_front();
	l1.print();
	return 0;
}
