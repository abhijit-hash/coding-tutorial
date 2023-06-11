class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> m;
        stack<int> s;
        vector<int> ans;
        int n = nums2.size();
        for (int i = n - 1; i >= 0; i--)
        {
            while (!s.empty() && s.top() < nums2[i])
            {
                s.pop();
            }
            if (s.empty())
            {
                m[nums2[i]] = -1;
            }
            else
            {
                m[nums2[i]] = s.top();
            }
            s.push(nums2[i]);
        }
        for (auto num : nums1)
        {
            ans.push_back(m[num]);
        }
        return ans;
    }
};