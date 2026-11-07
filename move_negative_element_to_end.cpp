#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n;

    cout << "Enter the num of element you want: ";
    cin >> n;

    cout << "Enter the elements \n";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target element: ";
    cin >> target;

    int start = 0;
    int end = n - 1;
    int mid;

    while (start <= end) {
        mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            cout << "The target element is at index " << mid;
            break;
        }
        else if (arr[mid] > target) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    return 0;
}
