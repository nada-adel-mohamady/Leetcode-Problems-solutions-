class Solution {
public:
    vector<vector<int>>res;
    void backtrack(int n, int k, int index, vector<int>&tmp){
        if(tmp.size()==k){
            res.push_back(tmp);
            return;
        }
        for(int i=index; i<=n; i++){
            tmp.push_back(i);
            index++;
            backtrack(n, k, index, tmp);
            tmp.pop_back();
            
        }
    }
    vector<vector<int>> combine(int n, int k) {
        int index=1;
        vector<int>tuna;
        backtrack(n, k, index, tuna);
        return res;
    }
};