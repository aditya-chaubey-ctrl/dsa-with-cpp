#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"enter the value of row and column rspectivly : ";
    cin>>a>>b;
    int arr[a][b];
    cout<<"enter the elements of the array : ";
    for(int i = 0 ; i<a;i++){
        for(int j = 0 ; j<b ; j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0 ; i<a;i++){
        for(int j = 0 ; j<b ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}