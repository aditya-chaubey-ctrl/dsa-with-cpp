#include<iostream>
using namespace std;
class stacks{
    int capacity;
    int* array;
    int top;
    public:
    stacks(int capacity){
        this->capacity = capacity;
        array = new int[capacity];
        this->top = -1;  
    }
    void push(int value){
        if(this->top == this->capacity-1){
            cout<<"overflow condition"; 
            return;
        }
        this->top++;
        array[this->top]= value;
    }
    int pop(){
        if(this->top == -1){
            cout<<"Underflow codition";
            return 0;
        }
        int val = array[this->top];
        this->top--;
        return val;

    }
    ~stacks() {
        delete[] array;

    }
    void display(){
        for(int i = top; i>=0;i--){
            cout << array[i] << endl;

        }
    }
};
int main(){
    stacks s(7);
    s.push(10);
    s.push(56);
    s.pop();
    s.push(45);
    s.push(77);
    s.display();
    return 0;
}