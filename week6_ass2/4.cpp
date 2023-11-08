#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter rows of first matrix: ";
    cin>>m;
    int n = m;
    int arr[m][n];
    cout<<endl;
    //spiral 
    int minr =0,minc=0;
    int maxr=m-1,maxc=n-1;
    int tne=n*m;
    int count =0;
    int a=1;
    while(count<tne){
        //right
        for(int j=minc;j<=maxc && count<tne;j++){
            arr[minr][j]=a++;
            count++;

        }
        minr++;
        //down
        for(int i=minr;i<=maxr && count<tne;i++){
            arr[i][maxc]=a++;
            count++;
        }
        maxc--;
        //left
        for(int j=maxc;j>=minc && count<tne;j--){
            arr[maxr][j]=a++;
            count++;
        }
        maxr--;
        //top
        for(int i=maxr;i>=minr && count<tne;i--){
            arr[i][minc]=a++;
            count++;
        }minc++;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";

        }
        

    }
}