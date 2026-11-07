#include <iostream>
using namespace std;

int main() {
    int a[100];
    int n;
    int target;
    int index = -1;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    cout << "Enter the elements of the array (must be sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    cout << "Enter the element you want to find: ";
    cin >> target;
    
    int s = 0;
    int e = n - 1; 
    
    while (s <= e) {
        int mid = s + (e - s) / 2; 
        
        if (a[mid] == target) { 
            index = mid;
            break; 
        } 
        else if (a[mid] < target) { 
            s = mid + 1;
        } 
        else {
            e = mid - 1;
        }
    }
    
    if (index != -1) {
        cout << "The element is at index " << index << endl; 
    } else {
        cout << "Element not found" << endl;
    }
    
    return 0;
}
