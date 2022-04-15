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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root==nullptr)return {};
        queue<TreeNode*>q;
        q.push(root);
        TreeNode*tmp;
        vector<vector<int>>res;
        int n;
        vector<int>tuna;
        while(!q.empty()){
            n=q.size();
            for(int i=0; i<n; i++){
                tmp=q.front();
                q.pop();
                tuna.push_back(tmp->val);
                if(tmp->left)q.push(tmp->left);
                if(tmp->right)q.push(tmp->right);
            }
            res.push_back(tuna);
            tuna.clear();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};