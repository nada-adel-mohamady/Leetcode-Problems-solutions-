class Solution {
public:
    int jump(vector<int>& nums) {
        vector<int>dp(nums.size(), 0);
        int min_jump;
        for(int i=nums.size()-2; i>=0; i--){
            min_jump=dp[1+i]+1;
            for(int jump=2; jump<=nums[i]; jump++){
                if(i+jump>=nums.size())break;
                min_jump=min(dp[i+jump]+1, min_jump);
            }
            dp[i]=min_jump;
        }
        return dp[0];
    }
};