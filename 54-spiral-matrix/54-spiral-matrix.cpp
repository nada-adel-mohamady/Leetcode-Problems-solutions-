class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>res;
        int rows=matrix.size();
        int cols=matrix[0].size();
        bool right=true;
        bool left=false;
        bool down=false;
        bool up=false;
        int row=0;
        int col=0;
        for(int i=0; i<cols*rows; i++){
            
            res.push_back(matrix[row][col]);
            matrix[row][col]=200;
            if(right){
                col++;
                if(col==cols || matrix[row][col]==200){
                    down=true;
                    right=false;
                    row++;
                    col--;
                }
            }
            else if(down){
                row++;
                if(row==rows || matrix[row][col]==200){
                    left=true;
                    down=false;
                    col--;
                    row--;
                }
            }
            else if(left){
                col--;
                if(col==-1 || matrix[row][col]==200){
                    up=true;
                    left=false;
                    col++;
                    row--;
                }
            }
            else if(up){
                row--;
                if(matrix[row][col]==200){
                    up=false;
                    right=true;
                    row++;
                    col++;
                }
            }
        }
        return res;
    }
};