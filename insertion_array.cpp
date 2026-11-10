#include<iostream>
using namespace std;
int main(){
	int arr[100],n;
	cout<<"Enter the num of element you want : ";
	cin>>n;
	int item , pos;
	cout<<"Enter the elements of the array : ";
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	cout<<"Enter the element you want to insert in the array : ";
	cin>>item;
	cout<<"Enter the posision of that num : ";
	cin>>pos;
	for(int i = n; i>= pos ; i--){
		arr[i]= arr[i-1];
	}
	arr[pos-1] = item;
	n++;
	cout<<"array after insertion is : ";
	for(int i = 0; i<n; i++){
		cout<<arr[i];
		cout<<" ";
	}
	
	return 0;
}
