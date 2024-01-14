//anagram
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    if(s.size()!=t.size())cout<<"Not anagram"<<endl;
    else{
        int cnt[26]={0};
        int n=s.size();
        for(int i=0;i<n;i++){
            cnt[s[i]-'a']++;
            cnt[t[i]-'a']--;

        }
        int f1=0;
        for(int i=0;i<26;i++){
            if(cnt[i]!=0){
                f1=1;
                break;
            }
        }
        if(f1==0)cout<<"yes";
        else cout<<"no";
    }
}