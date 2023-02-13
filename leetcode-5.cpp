#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int mid;
        while(s<=e){
            mid = s + (e-s)/2 ;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid = s + (e-s)/2 ;
        }
        return -1;
    }
    int main(){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        int target;
        cin>>target;
        cout<<search(nums,target)<<endl;
    }