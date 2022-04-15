class Solution {
public:
    vector<vector<int>>res;
    void backtrack(vector<int>& nums, vector<int>&tmp, int index){
        
        for(int i=index; i<nums.size(); i++){
 
            tmp.push_back(nums[i]);
            res.push_back(tmp);
            index++;
            backtrack(nums, tmp, index);
            tmp.pop_back();
        }
     
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        int index=0;
        vector<int>tuna;
        res.push_back(tuna);
        backtrack(nums, tuna, index);
        return res;
    }
};