class Solution {
public:
    bool isValid(string s) {
        stack<int>stk;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='(' || s[i]=='['  || s[i]=='{'){
                stk.push(s[i]);
            }
            else if(!stk.empty()){
                if( (stk.top()=='(' && s[i]==')') || (stk.top()=='[' && s[i]==']') || (stk.top()=='{' && s[i]=='}') )
                {
                    stk.pop();
                }
                else{
                    return false;
                }
            }
            else 
                return false;
        }
        return stk.size()==0;
    }
};