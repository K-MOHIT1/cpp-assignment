#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int x=0;
    for(int i=0;i<s.length();i++){
        x*=10;
        x+=s[i]-48;

    }
    cout<<x;

}