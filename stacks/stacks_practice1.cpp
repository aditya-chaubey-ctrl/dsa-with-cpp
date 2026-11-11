#include<iostream>
using namespace std;
class stacks{
    int* arr;
    int size ;
    int top;
    public:
    stacks(int size){
        this->size = size;
        this->top = -1;
        arr = new int[this->size];
    }
    void push(int value){
        if(this->top == (size - 1)){
            cout<<"this is the codition for overflow";
            return;
        }
        this->top++;
        arr[this->top]= value;
    }

    void pop(){
        if(this->top == -1){
            cout<<"the stack is empty";
            return;
        }
        this->top--;
        
    }
    void display(){
        if(this->top == -1){
            cout<<"the stack is empty";
            return;
        }
        for(int i = this->top; i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    stacks s(5);
    s.push(3);
    s.push(7);
    s.push(2);
    s.push(8);
    s.push(9);
    s.pop();
    s.display();
    s.push(12);
    s.display();
    
    return 0;
}