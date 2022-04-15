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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int dir=0;
        TreeNode*tmp;
        int n;
        vector<int>tuna;
        vector<vector<int>>res;
        if(root==nullptr)return res;
        int flag=1;
        while(!q.empty()){
            n=q.size(); 
            for(int i=0; i<n; i++){
                tmp=q.front();
                //cout<<"dir "<<dir<<endl;
                tuna.push_back(tmp->val);
                q.pop();
                if(tmp->left)q.push(tmp->left);
                if(tmp->right)q.push(tmp->right);         

            }
            //if(flag)
            if(dir)
                reverse(tuna.begin(), tuna.end());
            dir=1-dir;
            //flag=1-flag;
            res.push_back(tuna);
            tuna.clear();
        }
        return res;
    }
};