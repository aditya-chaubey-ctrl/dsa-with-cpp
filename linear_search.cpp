#include<iostream>
using namespace std;
int main(){
	int a[100];
	int n;
	int target;
	int index = -1;
	cout<<"Enter the number of element :";
	cin>>n;
	cout<<"Enter the elements of the array";
	for(int i = 0 ; i<n;i++){
		cin>>a[i];
	}
	cout<<"enter the element you want to find: ";
	cin>>target;
	for(int j = 0; j<n;j++){
		if(a[j]==target){
			cout<<"the target element is at "<< j;
			index= j;
			break;
		}
	}
//	if(index != -1){
//		cout<<"The element is at index"<<index<<endl;
//	}
//	else{
//		cout<<"Element is not in the given array";
//	}
	return 0;
}
