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
    vector<int>res;
    void dfs(TreeNode* root){
        if(root==nullptr){
            return;
        }
        res.push_back(root->val);
        dfs(root->left);
        dfs(root->right);
    }
    void flatten(TreeNode* root) {

        TreeNode*tmp=root;
        dfs(root);
        for(int i=0; i<res.size(); i++){
            tmp->val=res[i];
            tmp->left=nullptr;
            if(i==res.size()-1)break;
            tmp->right=new TreeNode();
            tmp=tmp->right;
        }
        
    }
};