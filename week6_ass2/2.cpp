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
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }cout<<endl;
    //printing the transpose
    for(int i=0;i<m;i++){
        for(int j=0;j<i;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    cout<<endl;
    //rotating the matrix
    //outer loop colum me chalega
    for(int c=0;c<m;c++){
        //reverse the cth column
        int i=0;
        int j=m-1;
        while(i<j){
            swap(arr[i][c],arr[j][c]);
            i++;
            j--;

        }


    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }


    



}