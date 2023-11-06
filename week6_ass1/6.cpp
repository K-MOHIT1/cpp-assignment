#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of rows/columns: ";
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==n/2 or j==n/2){ //or and || both run
                cout<<a[i][j]<<" ";
            }
            else{
                cout<<" "<<" ";

            }
        }
        cout<<endl;
    }
}