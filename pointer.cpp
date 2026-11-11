#include<iostream>
using namespace std;

int main() {
    int a = 19;        // Declare an integer variable and initialize it
    int* p = &a;       // Pointer p stores the address of variable a
    cout << *p << endl; // Dereference p to print the value stored at that address
    cout << p;          // Print the memory address stored in p
    return 0;
}