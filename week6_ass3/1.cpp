#include<iostream>
using namespace std;
#include<vector>
int main(){
    int m;
    cout<<"Enter the no of rows: ";
    cin>>m;
    int n;
    cout<<"Enter the no of columns: ";
    cin>>n;
    int matrix[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }cout<<endl;
    int copy[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            copy[i][j] = matrix[i][j];

        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(copy[i][j]==0){
                //set 0s at ith row
                for(int c=0;c<n;c++){
                    matrix[i][c]=0; 
                }
                //set os at jth column
                 for(int r=0;r<m;r++){
                    matrix[r][j]=0;
                }
            }

        }   
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}