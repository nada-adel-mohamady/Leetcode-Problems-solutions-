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
    vector<int> largestValues(TreeNode* root) {
        if(root == nullptr)return {};
        vector<int> res;
        queue<TreeNode*>bfs;
        bfs.push(root);
        int n;
        TreeNode* tmp;
        int max_value;
        while(!bfs.empty()) {
            n = bfs.size();
            max_value = INT_MIN;
            for(int i=0; i<n; i++) {
                tmp = bfs.front();
                max_value = max(max_value, tmp->val);
                bfs.pop();
                if(tmp->left)bfs.push(tmp->left);
                if(tmp->right)bfs.push(tmp->right);
            }
            res.push_back(max_value);
        }
        return res;
    }
};