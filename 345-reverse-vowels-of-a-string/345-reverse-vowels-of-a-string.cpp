class Solution {
public:
    string reverseVowels(string s) {
        int i = 0;
        int j = s.size() - 1;
        int swap;
        char char1, char2;
        while (i < j) {
            char1 = tolower(s[i]);       
            if(char1 == 'a' || char1 == 'e' || char1 == 'i' || char1 == 'o' || char1 == 'u') {
                while (j > i) {
                    //cout<<"char "<<char1<<" char2 "<<char2<<endl;
                    char2 = tolower(s[j]);
                    if(char2 == 'a' || char2 == 'e' || char2 == 'i' || char2 == 'o' || char2 == 'u') {
                        swap = s[i];
                        s[i] = s[j];
                        s[j] = swap;
                        j--;
                        break;
                    }
                    j--;     
                }
                
            }
            i++;
        }
        return s;
    }
};