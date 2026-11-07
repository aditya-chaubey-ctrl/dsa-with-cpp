#include<iostream>
using namespace std;
int main(){
	int arr[100],n;
	cout<<"Enter the num of element you want";
	cin>>n;
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	int index;
	cout<<"Enter the index you want to delete ";
	cin>>index;
	for(int i = index ; i<n-1; i++){
		arr[i] = arr[i-1];
	}
	n--;
	cout<<"array after deletion is : ";
	for(int i = 0; i<n; i++){
		cout<<arr[i];
		cout<<" ";
	}
	
	return 0;
}
