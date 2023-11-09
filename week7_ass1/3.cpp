#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string: ";
    bool k=false;
    getline(cin,s);
    int i=0,j=s.size()-1;
    while(i<=j){
        if(s[i]!=s[j]){
            k=true;
            break;

        }
        i++;
        j--;
    }
    if(k==true)cout<<"Not a palidrome";
    else cout<<"Is a palidrome";


}