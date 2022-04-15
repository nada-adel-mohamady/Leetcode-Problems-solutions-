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
    bool hasPathSum(TreeNode* root, int targetSum, int val=0) {
        if(root==nullptr){
            return false;
        }
        val+=root->val;
        if(root->right==nullptr && root->left==nullptr){
            return val==targetSum;
        }
        return hasPathSum(root->right, targetSum, val)||hasPathSum(root->left, targetSum, val);
    }
};