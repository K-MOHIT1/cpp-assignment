#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the row no: ";
    cin>>n;
    int m;
    cout<<"Enter the column no: ";
    cin>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];

        }
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(max<a[i][j]) max=a[i][j];

        }
    }
    cout<<"The largest element is "<<max;







}
