#include<iostream>
using namespace std;
int main(){
	int *p = new int ;  // ek space ban gya hai heap me jiska address p ke pas hai(new int  = int data type ke liye)
	*p = 56;   // us place par 56  hai abhi
	cout<<*p<<endl;  //display the value
	float *p1 = new float;//ek space ban gya hai heap me jiska address p1 ke pas hai(new float  = float data type ke liye)
	*p1 = 98.9;
	cout<<*p1<<endl;
	int n;
	cout<<"Enter the size of the array : "<<endl;
	cin>>n;
	int *ptr = new int[n]; // n space ban gya hai heap me jiska address ptr ke pas hai
	for(int i= 0 ; i<n; i++){
		ptr[i] = i+1;	
	}
	for(int i= 0 ; i<n; i++){
		cout<<ptr[i] ;	
	}
	delete p;//for delete the space jo bna hai heap me 
	delete p1;
	delete []ptr;
return 0;	
}

