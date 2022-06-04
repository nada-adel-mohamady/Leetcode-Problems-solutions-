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
    int height(TreeNode* root) {
        if(root==nullptr) {
            return 0;
        }
        return max(height(root->left), height(root->right) ) + 1;
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr)return 0;
        int lheight = height(root->left);
        int rheight = height(root->right);
        int rdiameter = diameterOfBinaryTree(root->right);
        int ldiameter = diameterOfBinaryTree(root->left);
        int diameter = max(lheight + rheight , max(rdiameter, ldiameter));
        return diameter;
    }
};