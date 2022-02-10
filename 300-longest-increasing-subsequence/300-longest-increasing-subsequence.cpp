class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>dp(nums.size(), 1);
        int max_num=1;
        for(int i=nums.size()-1; i>=0; i--){
            for(int j=i; j<nums.size(); j++){
                if(nums[i]<nums[j]){
                    if(dp[j]+1>dp[i]){
                        dp[i]=dp[j]+1;
                    }
    
                }
                    
            }
            if(dp[i]>max_num)max_num=dp[i];
        }
        return max_num;
    }
};