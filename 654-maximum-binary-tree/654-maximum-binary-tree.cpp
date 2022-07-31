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
    int maxIndex(vector<int>& nums) {
        int inx = 0;
        int max_val = nums[0];
        for(int i = 0; i < nums.size(); i++) {
            if (nums[i] > max_val) {
                inx = i;
                max_val = nums[i];
            }
        }
        return inx;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.size() == 0)return nullptr;
        int root_inx = maxIndex(nums);
        TreeNode* root = new TreeNode(nums[root_inx]);
        
        vector<int>leftVec = vector<int>(nums.begin(), nums.begin() + root_inx);
        vector<int>rightVec = vector<int>(nums.begin() + root_inx + 1, nums.end());
        
        if(root)
            root->left = constructMaximumBinaryTree(leftVec);
            root->right = constructMaximumBinaryTree(rightVec);
        return root;
    }
};