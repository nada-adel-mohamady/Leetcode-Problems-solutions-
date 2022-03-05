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
    int maxLen = 0;
    int Sum = 0;
    void deepestLen(TreeNode* root, int deepLen) {
        if(root==nullptr) {
            maxLen = max(deepLen, maxLen);
            return;
        }
        deepestLen(root->right, deepLen+1);
        deepestLen(root->left, deepLen+1);
    }
    void deepestSum(TreeNode* root, int deepLen) {
        if(root==nullptr) {
          return;
        }
        if(root->left==nullptr && root->right==nullptr && deepLen+1==maxLen) {
            Sum+=root->val;
        }
        deepestSum(root->right, deepLen+1);
        deepestSum(root->left, deepLen+1);
    }
    int deepestLeavesSum(TreeNode* root) {
        deepestLen(root, 0);
        deepestSum(root, 0);
        return Sum;
    }
};