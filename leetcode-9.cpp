class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int p=0,n=0;
        for(auto x:nums){
            if(x>0)p++;
            else if(x<0)n++;
        }
        return max(p,n);
    }
};