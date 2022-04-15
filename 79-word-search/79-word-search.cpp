class Solution {
public:
    bool backtrack(vector<vector<char>>& board, int visited[6][6], string word, string s, int index, int i, int j){
        if(word==s){
           return true;
        }
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j]!=word[index] || visited[i][j]==1)return false;
        
        visited[i][j]=1;
        if(backtrack(board, visited, word,  s+board[i][j], index+1, i+1, j)||      
        backtrack(board, visited, word,  s+board[i][j], index+1, i, j+1)||
        backtrack(board, visited, word,  s+board[i][j], index+1, i-1, j)||
        backtrack(board, visited, word,  s+board[i][j], index+1, i, j-1)){
            return true;
        }
        visited[i][j]=0;
        return false;

    }
    bool exist(vector<vector<char>>& board, string word) {
        int vis[6][6];
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[0].size(); j++){
                
                if(backtrack(board, vis, word, "", 0, i, j)){
                    return true;
                }
            }
        }
        return false;
    }
};