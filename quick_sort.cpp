#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of the arr : ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of the arr : ";
	for(int i = 0 ; i<n;i++){
		cin>>arr[i];
	}
	cout<<"The entered arr is: ";
	for(int i = 0 ; i<n;i++){
		cout<<arr[i]<<" ";
	}
	int pivot = arr[0];
	int arr1[100];
	int arr2[100];
	for(int i = 0 ; i<n ; i++){
		if(arr[i]<=pivot){
			arr1[i]= arr[i];
		}
		else{
			arr2[i]= arr[i];
		}
	}
	for(int i = 0 ; i<n;i++){
		cout<<arr1[i]<<" ";
	}
	cout<<endl;
	for(int i = 0 ; i<n;i++){
		cout<<arr2[i]<<" ";
	}
	
	
	return 0;
}

