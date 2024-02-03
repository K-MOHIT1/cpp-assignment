#include<iostream>
using namespace std;
int main(){
    int arr[3][4]={(1,3,5,7),(10,11,16,20),(23,30,34,60)};
    int n=3;
    int m=4;
    int x;
    cin>>x;
    int lo=0;
    int hi=n*m-1;
    bool flag=true;
    while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            int row=mid/n;
            int col=mid%n;
            if(arr[row][col]==x){
                flag=false;
                cout<<"True";
                break;
            }
            else if(arr[row][col]>x) hi=mid-1;
            else lo=mid+1;
        }
    if(flag==true){
        cout<<"False";
    }

    
}