#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    int n=s.size();
    if(s.size()%2 != 0) cout<<"Invalid input."<<endl;
    else{
        reverse(s.begin() + n / 2, s.end());
        cout << s;
    }
    
}
