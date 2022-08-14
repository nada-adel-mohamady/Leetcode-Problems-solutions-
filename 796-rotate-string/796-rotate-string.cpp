class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size())return false;
        int i = 0;
        int j = 0;
        int last_match = -1;
        while (i < s.size()) {
            while (s[0] != goal[j]) {
                j++;
                if(j == goal.size())return false;
            }
            last_match = j;
            while (i < s.size() && s[i] == goal[j]) {
                i++;
                j++;
                j = j % goal.size();
  
            }
            if(i == s.size())return true;
            i = 0;
            j = last_match + 1;
            j = j % goal.size();
            if(j == 0)return false;
        }
        return false;
    }
};