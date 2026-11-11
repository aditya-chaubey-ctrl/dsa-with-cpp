
#include<iostream>
using namespace std;

class Queue{
public:
    int* arr;
    int size;
    int front;
    int rear;

    Queue(int size){
        this->size = size;
        arr = new int[size];

        front = -1;
        rear = -1;
    }

    // Insert element
    void push(int val){

        // Check overflow
        if(rear == size - 1){
            cout<<"Queue is full"<<endl;
            return;
        }

        if(front == -1){
            front = 0;
        }

        rear++;
        arr[rear] = val;
    }

    // Remove element
    void pop(){

        // Check underflow
        if(front == -1){
            cout<<"Queue is empty"<<endl;
            return;
        }

        if(front == rear){
            front = rear = -1;
        }
        else{
            front++;
        }
    }

    // Display queue
    void display(){

        if(front == -1){
            cout<<"Queue is empty"<<endl;
            return;
        }

        for(int i = front; i <= rear; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    ~Queue(){
        delete[] arr;
    }
};

int main(){

    Queue q(5);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    q.display();

    q.pop();

    q.display();

    return 0;
}
