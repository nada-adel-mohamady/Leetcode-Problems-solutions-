class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>stk;
        int res = 0;
        vector<int>exist(s.size(), 0);
        for(int i = 0; i<s.size(); i++) {
            if(s[i] == '(') {
                stk.push(i);
            }
            else if(!stk.empty()) {
                exist[stk.top()] = 1;
                exist[i] = 1;
                stk.pop();
            }
        }
        
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