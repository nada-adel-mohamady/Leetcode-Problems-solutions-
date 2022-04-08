class Solution {
public:
    vector<string>res;
    void backtrack(string str, int open, int close, int max){
        //base case 
        if(str.size()==2*max){
            res.push_back(str);   
            return;
        }
        if(open<max){
            backtrack(str+"(", open+1, close, max);
        }
        if(close<open){
            backtrack(str+")", open, close+1, max);
        }

    }
    vector<string> generateParenthesis(int n) {
        string str="";
        backtrack(str, 0, 0, n);
        return res;
    }
};