class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>stk;
        int last = 0;
        int res = 0;
        pair<char, int>tmp;
        vector<int>exist(s.size(), 0);
        for(int i = 0; i<s.size(); i++) {
            if(s[i] == '(') {
                stk.push(i);
            }
            else {
                if (!stk.empty()) {
                    exist[stk.top()] = 1;
                    exist[i] = 1;
                    stk.pop();
                } 
            }
        }
        bool cont = false;
        int curr_sum = 0;
        for (int i = 0; i < s.size(); i++) {
            if(exist[i]) {
                curr_sum++;
            }
            else {
                res = max(res, curr_sum);
                curr_sum = 0;
                
            }
        }
        return max(res, curr_sum);
    }
};