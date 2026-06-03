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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root && !subRoot) return true;
        if(!root) return false;
        if(isSameTree(root, subRoot))
        {
            return true;
        }
        result_left = isSubtree(root->left, subRoot);
        if(result_left){
           return true; 
        }
        result_right = isSubtree(root->right, subRoot);
        if(!result_right)
            return false;
        return true;
    }
private:
    bool result_left = false;
    bool result_right = false;
    bool isSameTree(TreeNode* p, TreeNode* q)
    {
         if(!p || !q)
        {
            if(!p && !q) return true;
            return false;   
        }

        bool left = isSameTree(p->left, q->left);
        bool right = isSameTree(p->right, q->right);

        if(true != left || true != right)
            return false;
        
        if(p && q)
        {
            if(p->val != q->val)
                return false;
        }
        else
            return true;
        
        return true;
    }
};
