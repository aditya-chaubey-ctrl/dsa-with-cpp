
#include<iostream>
using namespace std;

class Node{
public:
    Node* next;
    int value;

    Node(int value){
        this->value = value;
        next = NULL;
    }
};

class Queue{
public:
    Node* head;

    Queue(){
        head = NULL;
    }

    // Insert element at the rear
    void push(int val){
        Node* newNode = new Node(val);

        // If queue is empty
        if(head == NULL){
            head = newNode;
            return;
        }

        Node* temp = head;

        // Go to the last node
        while(temp->next != NULL){
            temp = temp->next;
        }

        temp->next = newNode;
    }

    // Remove element from the front
    void pop(){
        if(head == NULL){
            cout<<"The queue is empty"<<endl;
            return;
        }

        Node* temp = head;
        head = head->next;

        delete temp;
    }

    // Display queue
    void display(){
        if(head == NULL){
            cout<<"The queue is empty"<<endl;
            return;
        }

        Node* temp = head;

        while(temp != NULL){
            cout<<temp->value<<" ";
            temp = temp->next;
        }

        cout<<endl;
    }

    // Free remaining nodes
    ~Queue(){
        while(head != NULL){
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main(){
    Queue q;

    q.push(9);
    q.push(34);
    q.push(55);
    q.push(8);

    q.display();

    q.pop();

    q.display();

    return 0;
}
