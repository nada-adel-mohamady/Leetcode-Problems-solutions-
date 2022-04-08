class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<int>tmp;
        vector<vector<int>>res;
        int n=matrix.size()-1;
        for(int col=0;col<matrix.size();col++){
            for(int row=n;row>=0;row--){
                tmp.push_back(matrix[row][col]);
            }
            res.push_back(tmp);
            tmp.clear();
        }
        matrix=res;
    }
};