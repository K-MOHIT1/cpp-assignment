#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    char max1='!',max2='!';
    for(int i=0;i<s.size();i++){
        if(max1<(s[i])){
            max2=max1;
            max1=(s[i]);
            
        }else if(max2<(s[i]) && max1!=(s[i])){
            max2=(s[i]);
        }
    }
    if(max2=='!') cout<<"No second largest number";
    else cout<<max2<<endl;

}