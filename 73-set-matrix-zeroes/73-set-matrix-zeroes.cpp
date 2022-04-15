class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_map<int, int>row;
        unordered_map<int, int>col;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(row[i]){
                    matrix[i][j]=0;
                }
                if(col[j]){
                    matrix[i][j]=0;
                }
            }
        }
    }
};