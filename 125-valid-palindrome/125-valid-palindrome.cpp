class Solution {
public:
    bool isPalindrome(string s) {
        int leftPointer = 0;
        int rightPointer = s.size() - 1;
        while (leftPointer < rightPointer) {
            if (!iswalnum(s[leftPointer])) {
                leftPointer++;
            }
            if (!iswalnum(s[rightPointer])) {
                rightPointer--;
            }
            if (iswalnum(s[leftPointer]) && iswalnum(s[rightPointer]) && tolower(s[leftPointer]) == tolower(s[rightPointer])) {
                leftPointer++;
                rightPointer--;
            }
            if (iswalnum(s[leftPointer]) && iswalnum(s[rightPointer]) && tolower(s[leftPointer]) != tolower(s[rightPointer])) {
                return false;
            }
        }
        return true;
    }
};