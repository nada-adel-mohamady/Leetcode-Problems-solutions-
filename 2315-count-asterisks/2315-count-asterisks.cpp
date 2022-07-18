class Solution {
public:
    int countAsterisks(string s) {
        int count = 0;
        bool insideBar = true;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '|' && !insideBar) {
                insideBar = true;
            }
            else if (s[i] == '|') {
                insideBar = false;
            }
            else if (s[i] == '*' && insideBar) {
                count++;
            }
        }
        return count;
    }
};