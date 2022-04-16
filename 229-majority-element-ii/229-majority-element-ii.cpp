class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        if(nums.size()==1)return {nums[0]};
        int th=nums.size()/3;
        sort(nums.begin(), nums.end());
        int count=1;
        vector<int>res;
        int i=0;
        while(i<nums.size()){
            if(i+1<nums.size() && nums[i]==nums[i+1])count++;
            else {
                count=1;
            }
         
            if(count>th){
                res.push_back(nums[i]);
                while(i+1<nums.size() && nums[i]==nums[i+1])i++;
                count=1;
            }
            
            
            i++;
        }
        return res;
    }
};