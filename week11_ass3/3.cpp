#include<iostream>
#include<vector>
using namespace std;
void gen(int a[],int b[],int sa,int sb,int aidx,int bidx,vector<int> v,bool isfroma){
    if(isfroma) {
        for(int k = 0; k < v.size(); ++k) {
            cout <<v[k] << " ";
        }
        cout << endl;
    }
    if(isfroma){
        for(int k=aidx;k<sa;k++){
            if(v.size()==0 || a[k]>v.back()){
                v.push_back(a[k]);
                gen(a,b,sa,sb,k+1,bidx,v,false);
                v.pop_back();
            }
        }
        
    }
    else{
        for(int i=bidx;i<sb;i++){
            if(b[i]>v.back()){
                v.push_back(b[i]);
                gen(a,b,sa,sb,aidx,i+1,v,true);
                v.pop_back();
            }
        }
    }
    
}
int main(){
    int a[]={10,15,25};
    int b[]={1,5,20,30};
    int sa=sizeof(a)/sizeof(a[0]);
    int ba=sizeof(b)/sizeof(a[0]);
    vector<int> ans;
    gen(a,b,sa,ba,0,0,ans,true);

}