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
    TreeNode* constructBST(vector<int>&nums, int left, int right){
        if(left>right){
            return nullptr;
        }
        int mid=(right+left)/2;
        TreeNode*current=new TreeNode(nums[mid]);
        current->left=constructBST(nums, left, mid-1);
        current->right=constructBST(nums, mid+1, right);
        return current;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0){
            return nullptr;
        }
        TreeNode*current=new TreeNode();
        current=constructBST(nums, 0, nums.size()-1);
        return current;
    }
    
};