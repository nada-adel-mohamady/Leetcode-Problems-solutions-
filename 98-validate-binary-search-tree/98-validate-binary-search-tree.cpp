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
    bool isValidBST(TreeNode* root) {
        if(root==nullptr)return true;
        if(root->left!=nullptr && maxValue(root->left)>=root->val)return false;
        if(root->right!=nullptr && minValue(root->right)<=root->val)return false;
        if(!isValidBST(root->right)||!isValidBST(root->left))return false;
        return true;
        
    }
    int minValue(TreeNode* root){
        if(root==nullptr)return INT_MAX;
        int res = root->val;  
        int lres = minValue(root->left);  
        int rres = minValue(root->right);  
        if (lres < res)  
        res = lres;  
        if (rres < res)  
        res = rres;  
        return res;
       // if(root->right==nullptr && root->left==nullptr)return root->val;
      //  return min(minValue(root->right),minValue(root->left));
    }
    
    int maxValue(TreeNode* root){
        if(root==nullptr)return INT_MIN;
        int res = root->val;  
        int lres = maxValue(root->left);  
        int rres = maxValue(root->right);  
        if (lres > res)  
        res = lres;  
        if (rres > res)  
        res = rres;  
        return res; 
      //  if(root->right==nullptr && root->left==nullptr)return root->val;
       // return max(maxValue(root->right),maxValue(root->left));
    }
};