#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the value of a["<<i<<"] : ";
        cin>>a[i];
    }
    int x= 1;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(a[i]!= x){
            cout<<x<<endl;
            flag=true;
            break;
        }
        else x++;
    }
    if(flag==false) cout<<x<<endl;
    return 0;
}
