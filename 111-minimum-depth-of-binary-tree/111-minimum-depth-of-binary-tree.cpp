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
    int dfs(TreeNode* root){
        if(root==nullptr)
            return 100000000;
        if(root->left==nullptr && root->right==nullptr)
            return 1;
        int min_depth=1000000000;
        min_depth=min(min_depth, dfs(root->left)+1);

        min_depth=min(min_depth, dfs(root->right)+1);
        return min_depth;
    }
    int minDepth(TreeNode* root) {
        if(root==nullptr)
            return 0;
        return(dfs(root));
    }
};