#include<iostream>
using namespace std;
int revno(int n,int i){
    if(i==0){
        return n;
    }
    revno(n*10+i%10,i/10);
}
int main(){
    int i=12345;
    cout<<revno(0,i);
}