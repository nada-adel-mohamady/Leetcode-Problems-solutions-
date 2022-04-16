class Solution {
public:
    vector<vector<int>>res;
    void backtrack(vector<int>&nums, vector<int>&tmp, int k, int&target, int index){
        if(target==0 && tmp.size()==k){
            res.push_back(tmp);
            return;
        }
        if(target<0){
            return;
        }
        for(int i=index; i<nums.size(); i++){
            tmp.push_back(nums[i]);
            target-=nums[i];
            index++;
            backtrack(nums, tmp, k, target, index);
            target+=nums[i];
            tmp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>nums={1, 2, 3, 4, 5, 6, 7, 8, 9};
        int index=0;
        vector<int>tmp;
        backtrack(nums, tmp, k, n, index);
        return res;
    }
};