class Solution
{
public:
    bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
    {
        stack<int> s;
        int j = 0;
        for (auto i : pushed)
        {
            s.push(i);
            while (!s.empty() && popped[j] == s.top())
            {
                s.pop();
                j++;
            }
        }
        return s.empty();
    }
};