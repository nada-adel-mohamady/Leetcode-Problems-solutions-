class Solution {
public:
    vector<string>res;
    unordered_map<string, string>mp;
    string id;
    void backtrack(string &str, string &digits, int inx){
        if(str.size()==digits.size()){
            res.push_back(str);
            return;
        }
        id=digits.substr(inx, 1);
        for(auto c: mp[id]){
            str+=c;
            backtrack(str, digits, inx+1);
            str.pop_back();
     
        }

    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)return res;
        mp["2"]="abc";
        mp["3"]="def";
        mp["4"]="ghi";
        mp["5"]="jkl";
        mp["6"]="mno";
        mp["7"]="pqrs";
        mp["8"]="tuv";
        mp["9"]="wxyz";
      
        string s="";
        
        backtrack(s, digits, 0);
        return res;
    }
};