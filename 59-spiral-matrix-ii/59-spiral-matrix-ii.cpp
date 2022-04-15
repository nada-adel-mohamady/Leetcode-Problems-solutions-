class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>res;
        for(int i=0; i<n; i++){
            vector<int>tmp;
            for(int j=0; j<n; j++){
                tmp.push_back(0);
            }
            res.push_back(tmp);
        }
        int i=0;
        int j=0;
        int simulation=n*n;
        int num=1;
        bool right=true;
        bool down=false;
        bool top=false;
        bool left=false;
        while(simulation){
            res[i][j]=num++;
            if(right){
                
                j++;
                if(j==n){
                    j--;
                    i++;
                    down=true;
                    right=false;
                }
                else if(res[i][j]){
                    i++;
                    j--;
                    down=true;
                    right=false;
                }
              
            }
                
            else if(down){
                i++;
                if(i==n){
                    i--;
                    j--;
                    left=true;
                    down=false;
                }
                else if(res[i][j]){
                    j--;
                    i--;
                    left=true;
                    down=false;
                }
               
            }
            else if(top){
                i--;
                if(res[i][j]){
                    i++;
                    j++;
                    right=true;
                    top=false;
                }
            }
            else{
                j--;
                if(j==-1){
                    j++;
                    i--;
                    left=false;
                    top=true;
                }
                else if(res[i][j]){ 
                    j++;
                    i--;
                    left=false;
                    top=true;
                
                }
              
            }
           simulation--;
        }
        return res;
    }
};