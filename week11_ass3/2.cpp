#include<iostream>
#include<vector>
using namespace std;
void incseq(vector<int>& v,int k,int idx,vector<int> ans){
    if(v.size()==idx){
        if(ans.size()==k){
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
            
        }
        return;
    }
        if(ans.size()+(v.size()-idx)<k) return;
        incseq(v,k,idx+1,ans);
        ans.push_back(v[idx]);
        incseq(v,k,idx+1,ans);
        


    }
int main(){
    int n,k;
    cout<<"Enter the no: ";
    cin>>n;
    cout<<"Enter the length : ";
    cin>>k;
    vector<int> v;
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }
    vector<int> ans;
    incseq(v,k,0,ans);

}