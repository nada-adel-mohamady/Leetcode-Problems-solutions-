vector<int>dp(46, -1);
class Solution {
public:
    
  
    int climbStairs(int n) {
        if(n==1)return dp[n]=1;
        if(n==2)return dp[n]=2;
        if(n==3)return dp[n]=3;
        if (dp[n]!=-1){
            return dp[n];
        }
       dp[n]=climbStairs(n-1)+climbStairs(n-2);
        return dp[n];
    }
};