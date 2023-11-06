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
    int max_row=-1;
    
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum+=a[i][j];
        }if(max<sum){
            max=sum;
            max_row=i;

        }
    }
    cout<<"The max sum is "<<max<<endl;
    cout<<"The max sum row is "<<max_row;

}