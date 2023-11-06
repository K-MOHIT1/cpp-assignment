#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no of rows: ";
    cin>>m;
    int n;
    cout<<"Enter the no of columns: ";
    cin>>n;
    int arr[m][n];
    
    for(int i=0;i<m;i++){//i is for rows
        for(int j=0;j<n;j++){//j is for columns
           cin>>arr[i][j];

        }
        

    }
    
    int l1,l2,r1,r2;
    cout<<"Enter the first co-ordinate: "<<endl;
    cin>>l1>>r1;
    cout<<"Enter the second co-ordinate: "<<endl;
    cin>>l2>>r2;
    int sum=0;
    //sum
    for(int i=l1;i<=l2;i++){//i is for rows
        for(int j=r1;j<=r2;j++){//j is for columns
           sum+=arr[i][j];



        }
        
        

    }
    cout<<endl;
    cout<<sum;

}