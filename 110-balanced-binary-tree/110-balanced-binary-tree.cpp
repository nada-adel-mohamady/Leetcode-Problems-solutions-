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
    int depth(TreeNode*root){
        if(root==nullptr)
            return 0;
        
       return max(depth(root->left), depth(root->right))+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==nullptr)
            return true;
     
        int rHeight = depth(root->left);
        int lHeight = depth(root->right);
        
        return isBalanced(root->left)&&isBalanced(root->right)&&abs(rHeight-lHeight)<=1;
    }
};