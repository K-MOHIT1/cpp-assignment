#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& a,vector<int>& b,vector<int>& v){
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>=b[j]){
            v[k++]=a[i++];
        }
        else{
            v[k++]=b[j++];
        }

    }
    if(j==b.size()){
        while(i<a.size()) v[k++]=a[i++];
    }
    if(i==a.size()){
        while(j<b.size()) v[k++]=b[j++];
    }
     
    
}
void mergesortdes(vector<int>& v){
    int n=v.size();
    if(n==1) return;
    int n1=n/2;
    int n2=n-n/2;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[n1+i];
    }
    mergesortdes(a);
    mergesortdes(b);

    merge(a,b,v);
    a.clear();
    b.clear();

}
int main(){
    int arr[]={5,1,4,3,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    for(int el:v){
        cout<<el<<" ";
    }
     cout<<endl;
    mergesortdes(v);
   
     for(int el:v){
        cout<<el<<" ";
    }
}