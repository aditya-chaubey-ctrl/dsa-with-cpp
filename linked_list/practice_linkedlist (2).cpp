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
		
		Node* head ;
		Node* tail;
		
		Linkedlist(){
			head = tail = NULL;
		}
		void push_front(int val){
			Node* newNode = new Node(val);
			if(head == NULL){
				head = tail = newNode;
				return;
			}
			
			newNode->next = head;
			head = newNode;
		}
		
		
		void push_back(int val){
			Node* newNode = new Node(val);
			if(head == NULL){
				head = tail = newNode;
				return ;
			}
			
			tail->next = newNode;
			tail= newNode; 
		}
		
		
		
		void insert(int val , int pos){
			if(pos == 1){
				push_front(val);
				return ;
			}
			if(pos<= 0){
				cout<<"idex is invalid ";
				return ;
			}
			
			Node* newNode = new Node(val);
			Node* temp = head;
			for(int i = 0 ; i<pos -1 ; i++){
				if(temp == NULL){
					cout<<"The index is invalide ";
					
				}
				else{
					temp = temp->next ;
				}
			}
			newNode->next = temp->next;
			temp->next = newNode;
		}
		
		void print(){
			Node* temp = head;
			
			while(temp!= NULL ){
				cout<<temp->value<<" ";
				temp = temp->next;
			}
		}
		
		int search(int val){
			Node*temp = head;
			int index = 0;
			while(temp!= NULL){
				if(temp->value == val){
					cout<<"The element is at the index "<<index;
				}
				temp = temp->next;
				index = index +1;
			}
		}
		
		
};
int main(){
	Linkedlist l;
	l.push_front(3);
	l.push_back(6);
	l.push_front(8);
	l.push_front(9);
	l.print();
	cout<<endl;
	l.search(8);
	return 0;
}







