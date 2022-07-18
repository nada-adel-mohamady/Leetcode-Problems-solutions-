class Solution {
public:
    int countAsterisks(string s) {
        int count = 0;
        bool insideBar = false;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '|') {
                insideBar = !insideBar;
            }
            else if (s[i] == '*' && !insideBar) {
                count++;
            }
        }
        return count;
    }
};