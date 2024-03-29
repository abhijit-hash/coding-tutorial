/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    int maxLevelSum(TreeNode *root)
    {
        int maxsum = INT_MIN;
        int resultlevel = 0;

        queue<TreeNode *> q;
        q.push(root);

        int currlevel = 1;

        while (!q.empty())
        {

            int n = q.size();

            int sum = 0;
            while (n--)
            {
                TreeNode *temp = q.front();
                q.pop();
                sum += temp->val;

                if (temp->left != NULL)
                {
                    q.push(temp->left);
                }

                if (temp->right != NULL)
                {
                    q.push(temp->right);
                }
            }
            if (sum > maxsum)
            {
                maxsum = sum;
                resultlevel = currlevel;
            }
            currlevel++;
        }
        return resultlevel;
    }
};