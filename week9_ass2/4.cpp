#include<iostream>
using namespace std;
int main(){
    int arr[]={5,1,5,5,2,3};
    for(int ell : arr){
        cout<<ell<<" ";

    }
    cout<<endl;
    int n=6;
    //insertion sort
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
                j--;
            }

    }
     for(int ell : arr){
        cout<<ell<<" ";

    }
    cout<<endl;
    //storing the sorted array into an integer
    int m=0;
    for(int i=0;i<n;i++){
        m*=10;
        m+=arr[i];
    }
    cout<<m<<endl;
    // for second minimum, we need to change the sorted array
    for(int i=n-1;i>=1;i--){
        if(arr[i]!=arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }
    }
    //making this array into integer
     int k=0;
    for(int i=0;i<n;i++){
        k*=10;
        k+=arr[i];
    }
    cout<<k<<endl;
    cout<<"Minimum sum is :"<<m+k;



}