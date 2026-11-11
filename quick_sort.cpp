#include<iostream>
using namespace std;
int partition(int arr,int st,int end){
	int idx = st-1;
	int pivot = arr[end];
	

}
void Quicksort(int arr,int st,int end){
	if(st<end){
		int piv = partition(arr,st,end);
		Quicksort(arr,st,piv-1);
		Quicksort(arr,piv+1,end);
	}
}
int main(){

	return 0;
}