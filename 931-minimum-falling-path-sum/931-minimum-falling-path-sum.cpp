class Solution {
public:
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int minSum = INT_MAX;
        for(int i=1; i<matrix.size(); i++) {
            for(int j=0; j<matrix[i].size(); j++) {
                if(j-1>=0 && j+1<matrix[i].size()){
                    matrix[i][j] += min(matrix[i-1][j], min(matrix[i-1][j-1], matrix[i-1][j+1]));
                }
                else if(j-1>=0) {
                    matrix[i][j] += min(matrix[i-1][j], matrix[i-1][j-1]);
                }
                else {
                    matrix[i][j] += min(matrix[i-1][j], matrix[i-1][j+1]);
                }
                
            }
        }
        for(auto num: matrix.back()) {
            minSum = min(num, minSum);
        }
     
        return minSum;
    }
};