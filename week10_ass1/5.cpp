#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int n;
    cin>>n;
    int lo=0;
    int hi=size-1;
    bool flag = true;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        long long m=(long long)mid;
        long long y=(long long)n;
        if((m*m)==y){ 
            cout<<"yes";
            flag=false;
            break;
        }
        else if(m*m>y)hi=mid-1;
        else lo=mid+1;
    }
    if(flag==true){
        cout<<"No";
    }
}