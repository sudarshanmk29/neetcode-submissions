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
    bool isBalanced(TreeNode* root) 
    {
        if(-1 == dfs(root))
            return false;
        return true;
    }
private:
    int dfs(TreeNode* root)
    {
        if(!root) return 0;
        int left = dfs(root->left);
        int right = dfs(root->right);
        if(left == -1 || right == -1)
            return -1;
        if(1 < abs(left - right))
            return -1;
        return 1 + max(left, right);
    }
};
