class Solution {
public:
int minimizeSum(vector<int>& nums) {
    int n = nums.size();
    if ( n ==3)return 0;
    sort( nums.begin(), nums.end());
    //case 1
    int thrd= nums[2];
    int last1 = nums[n-1];
    int diff1 = abs( last1 - thrd);

    // case 2;
    int diff2 = abs(nums[n-2] - nums[1]);
    // case 3
    int diff3 = abs( nums[n-3] - nums[0]);


  return min ( diff1, min( diff2, diff3));

    }
};