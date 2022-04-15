class Solution {
public:
    int dp[100][100];
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(i>0 && j>0 && !obstacleGrid[i][j]){
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
                }
                else if((obstacleGrid[i][j]) ||(j>0 && dp[i][j-1]==0) || (i>0 && dp[i-1][j]==0)) {
                    dp[i][j]=0;
                }
                else{
                    dp[i][j]=1;
                }
            }
        }
        return dp[m-1][n-1];
    }
};