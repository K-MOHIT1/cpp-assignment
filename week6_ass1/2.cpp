#include<iostream>
using namespace std;
int main(){
    cout<<"The first array\n";
    int m;
    cout<<"Enter the no of rows/columns: ";
    cin>>m;
   
    int arr[m][m];
    
    for(int i=0;i<m;i++){//i is for rows
        for(int j=0;j<m;j++){//j is for columns
           cin>>arr[i][j];

        }
        

    }
    for(int i=0;i<m;i++){//i is for rows
        for(int j=0;j<m;j++){//j is for columns
           cout<<arr[i][j]<<" ";


        }
        cout<<endl;
        

    }
    cout<<"The second array\n";
    int n;
    cout<<"Enter the no of rows/columns: ";
    cin>>n;
   
    int b[n][n];
    
    for(int i=0;i<n;i++){//i is for rows
        for(int j=0;j<n;j++){//j is for columns
           cin>>b[i][j];

        }
        

    }
    for(int i=0;i<n;i++){//i is for rows
        for(int j=0;j<n;j++){//j is for columns
           cout<<b[i][j]<<" ";


        }
        cout<<endl;
        

    }
    for(int i=0;i<n;i++){//i is for rows
        for(int j=0;j<n;j++){//j is for columns
           arr[i][j]=arr[i][j]+b[i][j];


        }
        cout<<endl;
        

    }
    for(int i=0;i<m;i++){//i is for rows
        for(int j=0;j<m;j++){//j is for columns
           cout<<arr[i][j]<<" ";

        }
        cout<<endl;
        

    }

    

}