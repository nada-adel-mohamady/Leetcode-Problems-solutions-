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
    int deepest = 0;
    int maxSum = 0;

    int deepestLeavesSum(TreeNode* root, int deep=0) {
        if(root==nullptr)return 0;
        if(root->left == nullptr && root->right == nullptr) {
            if(deep == deepest) maxSum += root->val;
            else if(deep>deepest) {
                maxSum = root->val;
                deepest = deep;
            }
        }
        deepestLeavesSum(root->left, deep+1);
        deepestLeavesSum(root->right, deep+1);
        return maxSum;
    }
};