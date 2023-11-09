#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    for(int i=0;s[i]!='\0';i++){
        if(i%2!=0){
            s[i]='#';
        }
    }
    cout<<s<<endl;
}
