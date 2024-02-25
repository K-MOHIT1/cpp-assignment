#include<iostream>
using namespace std;
int search(int arr[],int s,int n){
    if(s==-1) return -1;
    else if(arr[s]==n){
        return s;
    }
    else {
        return search(arr,s-1,n);
        
    }
}

int main(){
    int arr[]={1,2,3,4,5,7,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int x;
    cin>>x;
    cout<<search(arr,size-1,x);

}   