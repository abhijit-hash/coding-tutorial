#include<bits/stdc++.h>
using namespace std;
int mostFrequentEven(vector<int>& nums) {
        map<int,int>m;
        for(auto it:nums){
            if(it%2==0){
                m[it]++;
            }
        }
        int count=0;
        int ans=-1;
        for(auto it:m){
            if(it.second>count){
                count=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
    int main(){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        int ans=mostFrequentEven(nums);
    }