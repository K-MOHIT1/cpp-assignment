#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int a[n];
    
    //input
    for(int i=0;i<n;i++){
        cout<<"Enter the value of a["<<i<<"] : ";
        cin>>a[i];
    }
    //multiplication
    int product=1;
    for(int i=0;i<n;i++){
        product*=a[i];
        
    }
    cout<<"the product of array is : "<<product;

}
