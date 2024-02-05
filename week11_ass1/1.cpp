#include<iostream>
using namespace std;
int sumod(int a,int b){
    if(a==b) return a;
    else if(b%2!=0){
        return b+sumod(a,b-1);
    }
    else{
        return sumod(a,b-1);
    }

}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<sumod(a,b);
}