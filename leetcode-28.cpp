class Solution
{
public:
    vector<int> nextGreaterElements(vector<int> &nums)
    {
        int n = nums.size();
        stack<int> s;
        vector<int> v(n, -1);

        for (int i = n - 1; i >= 0; i--)
        {
            s.push(nums[i]);
        }

        for (int i = 2 * n - 1; i >= 0; i--)
        {
            while (!s.empty() && nums[i % n] >= s.top())
            {
                s.pop();
            }
            if (i < n)
            {
                if (s.empty() == false)
                {
                    v[i] = s.top();
                }
            }
            s.push(nums[i % n]);
        }
        return v;
    }
};