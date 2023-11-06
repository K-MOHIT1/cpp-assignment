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
    bool flag = false;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(a[i]==a[j]){
                flag = true;
                cout<<"Duplicate exist ";
                break;
            }
        }
    }
if(flag==false) cout <<"No duplicate";
return 0;
}






