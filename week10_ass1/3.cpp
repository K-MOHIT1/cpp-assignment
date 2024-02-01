//row with max ones
#include<iostream>
using namespace std;
int main(){
    int arr[3][6]={{0,0,0,0,1,1},{0,0,1,1,1,1},{0,1,1,1,1,1}};
    int m=3;//rows
    int n=6;//columns
    int x=1;//target
    int row=-1;
    int maxone=-1;
    for(int i=0;i<m;i++){ //bs on every row;
    int countones =0; //no of ones in ith row
        int lo=0;
        int hi=n-1;
        int firstidx=-1;
        while(lo<=hi){
            int mid =lo + (hi-lo)/2;
            if(arr[i][mid]==x){
                if(mid==0){
                    firstidx=mid;
                    break;

                }
                else if(arr[i][mid-1]!=x){
                firstidx=mid;
                    break;
                    
                }
                else{
                    hi=mid-1;

                }
            }
            else if(arr[i][mid]<x) lo=mid+1;
            else hi =mid-1;

        }
        if(firstidx!=-1){
            countones=n-firstidx;
        }
        if(maxone<countones){
            maxone=countones;
            row=i;
        }
    }
    cout<<"The row no is:"<<row<<" no of ones is: "<<maxone;
}