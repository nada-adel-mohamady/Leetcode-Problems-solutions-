class Solution {
public:
    int countAsterisks(string s) {
        bool left = false;
        int count = 0;
        bool pair = true;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '|' && !left) {
                left = true;
                pair = false;
            }
            else if (s[i] == '|') {
                left = false;
                pair = true;
            }
            else if (s[i] == '*' && pair) {
                count++;
            }
        }
        return count;
    }
};