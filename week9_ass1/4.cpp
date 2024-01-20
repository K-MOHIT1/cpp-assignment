#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int arr[5]={1,2,3,4,5};
    int size=5;
    for (int i = 0; i < size - 1; ++i){
        int flag= true;
        for (int j = 0; j < size - i - 1; ++j){
            if (arr[j] < arr[j + 1]){
                swap(arr[j],arr[j+1]);
                flag=false;

            }
        }
        if(flag==true){
            break;
        }
    }
    for (int i = 0; i < size; ++i){
        cout<<arr[i]<<" ";
    }
    return 0;
}