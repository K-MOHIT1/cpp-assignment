#include<iostream>
using namespace std;
string bina(int n){
    if(n==0){
        return "";
    }
    int rem=n%2;
    return bina(n/2)+to_string(rem);
}
int main(){
    int n;
    cin>>n;
    cout<<bina(n);
}