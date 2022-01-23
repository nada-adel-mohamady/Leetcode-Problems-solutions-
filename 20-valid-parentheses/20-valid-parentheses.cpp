class Solution {
public:
    bool isValid(string s) {
        stack<char>stak;
  
        for(int i=0;i<s.length();i++){
            if(stak.empty()){
                stak.push(s[i]);
            }
            else{
                if( (s[i]==')' && stak.top()=='(') || (s[i]==']' && stak.top()=='[') || (s[i]=='}' && stak.top()=='{')){
                    stak.pop();    
            }
            else{
                stak.push(s[i]);
            }
            }
            
            
            
        }
        if(stak.empty()){
            return true;
        }
        return false;
    }
};