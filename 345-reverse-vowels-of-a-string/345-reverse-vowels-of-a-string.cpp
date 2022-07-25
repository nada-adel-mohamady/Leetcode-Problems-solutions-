class Solution {
public:
    string reverseVowels(string s) {
        int i = 0;
        int j = s.size() - 1;
        int swap;
        while (i < j) {   
            while (i < j && !isVowel(s[i])) {
                i++;
            }
            while (i < j && !isVowel(s[j])) {
                j--;
            }
            if(i < j) {
                swap = s[i];
                s[i] = s[j];
                s[j] = swap;
                i++;
                j--;
            }       
        }
        return s;
    }
    
    bool isVowel(char c) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
        return false;
    }
};