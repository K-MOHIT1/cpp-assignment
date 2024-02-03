#include<iostream>
using namespace std;
int main(){
    int arr[]={9,8,7,6,5,4,3,2,1};
    int n=9;
    int x=3;
    int lo=n-1;
    int hi=0;
    while(hi<=lo){
        int mid=hi+(lo-hi)/2;
        if(arr[mid]==x){
            cout<<mid<<"th index";
            break;
        }
        else if(arr[mid]>x) hi=mid+1;
        else lo=mid-1;

    }
}