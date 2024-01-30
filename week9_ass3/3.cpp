#include<iostream>
using namespace std;
int main(){
    int arr[]={9,4,5,6,3,7,8,2,1};
    int n=9;
    int k;
    for(int ell:arr){
        cout<<ell<<" ";
    }
    cout<<endl;
    cout<<"Enter the k value :";
    cin>>k;
    //selection sort upto k
    
    for(int i=0;i<k;i++){
        int min=arr[i];
        int mindx =-1;
        for(int j=i;j<n;j++){
            if(min>arr[j]){
                min=arr[j];
                mindx=j;
            }
        }
        swap(arr[i],arr[mindx]);
    }
     for(int ell:arr){
        cout<<ell<<" ";
    }
    cout<<endl;
    cout<<"The smallest kth element is:"<<arr[k-1];

}