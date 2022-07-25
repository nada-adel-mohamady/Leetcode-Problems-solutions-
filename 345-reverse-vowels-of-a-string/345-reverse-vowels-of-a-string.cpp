class Solution {
public:
    string reverseVowels(string s) {
        int i = 0;
        int j = s.size() - 1;
        int swap;
        int char1, char2;
        while (i < j) {   
            char1 = tolower(s[i]);
            while (i < j && !(char1 == 'a' || char1 == 'e' || char1 == 'i' || char1 == 'o' || char1 == 'u')) {
                i++;
                char1 = tolower(s[i]);
            }
            char2 = tolower(s[j]);
            while (i < j && !(char2 == 'a' || char2 == 'e' || char2 == 'i' || char2 == 'o' || char2 == 'u')) {
                j--;
                char2 = tolower(s[j]);
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

};