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
    int diameterOfBinaryTree(TreeNode* root) 
    {
        dfs(root);
        return _diameter;
    }
private:
    int _diameter = 0;

    int dfs(TreeNode* root)
    {
        if(!root) return 0;
        int left = dfs(root->left);
        int right = dfs(root->right);
        _diameter = max(_diameter, left+right);
        return (1+max(left, right));
    }
};
