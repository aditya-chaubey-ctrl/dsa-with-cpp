#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* next;

    Node(int value){
        next = NULL;
        this->value = value;
    }
};

class stacks{
    public:
    Node* head;

    stacks(){
        head = NULL;
    }
    
    void push(int val){
        Node* newNode = new Node(val);
        if(head->next == NULL){
           head = newNode;
           return;
        }
        newNode->next = head;
        head = newNode;
    }

    void pop(){
        if(head->next == NULL){
            cout<<"the stack is empty";
            return;
        }

        head = head->next;
    }
    void display(){
        if(head == NULL){
            cout<<"the stacks is empty";
            return;
        }
        Node* temp = head;
        while(temp->next == NULL){
            cout<<temp->next;
            temp = temp->next;
        }
    }
    
};
int main(){
    stacks s;
    s.push(15);
    s.push(12);
    s.push(3);
    s.display();
    s.pop();
    s.display();
    return 0;
}