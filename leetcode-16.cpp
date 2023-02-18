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
class Solution {
public:
    pair<int,int>p;
    void dfs(TreeNode* root,int level){
        if(root==NULL){
            return;
        }
        if(level>p.first){
            p.first=level;
            p.second=root->val;
        }
        dfs(root->left,level+1);
        dfs(root->right,level+1);
    }
    int findBottomLeftValue(TreeNode* root) {
        p.first=0;
        p.second=root->val;
        dfs(root,0);
        return p.second;
    }
};