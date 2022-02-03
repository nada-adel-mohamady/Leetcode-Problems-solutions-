class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int, int>mp;
        vector<int>res;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]=1;
        }
        for(int i=1; i<=nums.size(); i++){
            if(!mp[i]){
                res.push_back(i);
            }
        }
        return res;
    }
};