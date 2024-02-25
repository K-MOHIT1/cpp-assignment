#include<iostream>
using namespace std;
#include<vector>
void previouslevel(vector<int> v,int n){
    if(n==0) return;
    vector<int> temp(n-1);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
        if(n!=0){
            temp[i-1]=v[i-1]+v[i];
        }
    }
    cout<<endl;
    previouslevel(temp,n-1);
    
    


}
int main(){
    vector<int> v;
    v={5,4,3,2,1};
    vector<int> ans;
    previouslevel(v,v.size());
}