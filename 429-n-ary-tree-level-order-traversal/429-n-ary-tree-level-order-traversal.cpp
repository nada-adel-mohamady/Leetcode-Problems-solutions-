/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
  
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>res;
        if(!root)return {};
        queue<Node*>q;
        q.push(root);
        while(!q.empty()) {
            int n = q.size();
            vector<int>level;
            for(int i=0; i<n; i++) {
                Node* tmp = q.front();
                q.pop();
                level.push_back(tmp->val);
                for(int j=0; j<tmp->children.size(); j++) {    
                     q.push(tmp->children[j]);
                } 
            }
            res.push_back(level);
        }
        return res;
    }
};