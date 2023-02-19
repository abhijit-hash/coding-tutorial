class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int ans=INT_MIN;
        int n=nums.size(),sum=0;
        vector<int>f(n,0);
        for(int i=0;i<n;i++){
            f[0]+=i*nums[i];
            sum+=nums[i];
        }
        for(int i=1;i<n;i++){
            f[i] = f[i-1] + sum - (n)*nums[n-i];
        }
        for(auto i:f){
            ans=max(ans,i);
        }
        return ans;
    }
};