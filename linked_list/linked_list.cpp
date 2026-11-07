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
int main(){
	Node n1(25);  // Give the value to the linked list.
	Node n2(33);  // Give the value to the linked list.
	Node n3(22);  // Give the value to the linked list.
	
	n1.next  = &n2;  //pointer de rhe hai lo value to pooint the next node value.
	n2.next = &n3;   //pointer de rhe hai lo value to pooint the next node value.
	cout<<n1.value<<" ";
	cout<< n1.next->value << " ";// Give the value to the linked list
	cout<<n2.next->value <<" ";// Give the value to the linked list
	
	
	return 0;
}
