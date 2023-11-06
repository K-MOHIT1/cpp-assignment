#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    //input
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int mx=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(mx<arr[i]) {
        smax=mx;
        mx=arr[i];
        }
        else{
            smax= max(smax,arr[i]);
        }

        if(arr[i]!=mx && smax<arr[i]) smax=arr[i];
    }
    cout<<"The max is : "<<mx<<endl;
    if(smax==INT_MIN) cout<<"No second largest exist";
    else cout<<"The second max is : "<<smax<<endl;
}