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
    vector<vector<int>>res;
    void backtrack(TreeNode*root, vector<int>&tmp, int &target){
        if(root==nullptr){
            return;
        };
        if(root->left==nullptr && root->right==nullptr && target==root->val){
            tmp.push_back(root->val);
            res.push_back(tmp);
            tmp.pop_back();
            return;
        }
        if( (root->left==nullptr&& root->right==nullptr) ){
            return;
        }
        
        target-=root->val;
        tmp.push_back(root->val);
        backtrack(root->left, tmp, target);
        backtrack(root->right, tmp, target);
        tmp.pop_back();
        target+=root->val;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>tuna;
        backtrack(root, tuna, targetSum);
        return res;
    }
};