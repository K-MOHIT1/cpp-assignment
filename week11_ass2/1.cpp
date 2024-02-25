#include<iostream>
using namespace std;
void rev(int arr[],int n){
    if(n==-1) return;
    cout<<arr[n];
    rev(arr,n-1);
    
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    rev(arr,size-1);
}