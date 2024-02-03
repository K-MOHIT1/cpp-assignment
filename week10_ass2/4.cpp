#include<iostream>
#include<vector>
using namespace std;
bool search(vector<int>& nums, int target) {
         int n=nums.size();
        int lo=0;
        int hi=n-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target) return true;
            else if(nums[lo]==nums[mid] && nums[hi]==nums[mid]){
                hi--;
                lo++;
            }
            else if(nums[mid]<=nums[hi]){//is mid to hi sorted 
                if(target>=nums[mid] && target<=nums[hi]){
                    lo=mid+1;
                }
                else hi=mid-1;
            }
            else{//arr[lo] <=arr[mid]->low to mid sorted
                 if(target>=nums[lo] && target<=nums[mid]){
                    hi=mid-1;
                }
                else lo=mid+1;

            } 
        }
        return false;
}
int main(){
    vector<int> v={2,5,6,0,0,1,2};
    int x;
    cin>>x;
    bool flag=search(v,x);
    if(flag==true){
        cout<<"True";

    }
    else{
        cout<<"False";
    }

}