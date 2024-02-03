#include<iostream>
using namespace std;
int main(){
    int a[] = {1,2,4,7,10,12,15,18};
    int lo = 0 , hi = 1;
    int tgt = 10;
    while(a[hi] < tgt){
        lo = hi;
        hi *= 2;
    }
    cout<<lo<<" "<<hi<<" range"<<endl;
    bool flag = false;
    while(lo <= hi){
        int mid = lo + (hi - lo)/2;
        if(a[mid] ==tgt){
            cout<<mid<<"th index";
            flag = true;
            break;
        }
        else if(a[mid] > tgt){
            hi = mid - 1;
        }
        else lo=mid+1;
    }
    if(flag==false){
        cout<<"Element not exist in this array";
    }
}
