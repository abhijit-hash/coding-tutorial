#include<bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m;
        vector<int>ans;
        for(auto x : nums){
            m[x]++;
        }
        for(auto x : nums){
            if(m[x]>(n/3)){
                ans.push_back(x);
                m[x]=0;
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
        vector<int>ans=majorityElement(nums);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }