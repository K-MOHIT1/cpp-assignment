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
    int min=INT_MAX;
    for(int i=0;i<=n-1;i++){
        if(min>arr[i]) min=arr[i];
    }

    cout<<"The min is : "<<min<<endl;

}