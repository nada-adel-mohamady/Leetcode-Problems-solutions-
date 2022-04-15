class Solution {
public:
    int dp[200][200];
    int minPathSum(vector<vector<int>>& grid) {
        for(int n=0; n<grid.size(); n++){
            for(int m=0; m<grid[0].size(); m++){
                if(n>0 && m>0){
                    dp[n][m]=grid[n][m]+min(dp[n][m-1], dp[n-1][m]);
                }
                else if(n>0){
                    dp[n][m]=grid[n][m]+dp[n-1][m];
                }
                else if(m>0){
                    dp[n][m]=grid[n][m]+dp[n][m-1];
                }
                else{
                    dp[n][m]=grid[n][m];
                }
                
            }
            
        }
        return dp[grid.size()-1][grid[0].size()-1];
    }
};