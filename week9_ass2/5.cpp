#include<iostream>
#include<string>
using namespace std;
int main(){
    string arr[5]={"mohit","vaibhav","ashfak","urvi","harsh"};
    int n=5;
    for(string ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    //bubblesort
    for(int i=0;i<n-1;i++){
    bool flag =true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag =false;
            }
        }
        if(flag ==true){
            break;
        }
    }
    for(string ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}