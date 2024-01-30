#include<iostream>
#include<vector>
using namespace std;
int minioccu(vector<int> arr){
    int n=arr.size();
    int minop=0;
    for(int i=0;i<n;i++){
        int j=i;
        while(j>=1 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            minop++;
            j--;
        }

    } 
    return minop;
}
int main(){
    vector<int> v={2,1,3,4,5,6,7,8,9};
    cout<<"the minimum operations to sort the array in increasind order is :"<<minioccu(v);


    
}