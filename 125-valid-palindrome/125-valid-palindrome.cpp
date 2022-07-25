class Solution {
public:
    bool isPalindrome(string s) {
        int leftPointer = 0;
        int rightPointer = s.size() - 1;
        bool isalphanumeric1, isalphanumeric2;
        while (leftPointer < rightPointer) {
            isalphanumeric1 = iswalnum(s[leftPointer]);
            isalphanumeric2 = iswalnum(s[rightPointer]);  
             if (isalphanumeric1 && isalphanumeric2 && tolower(s[leftPointer]) != tolower(s[rightPointer])) {
                return false;
            }
            if (!isalphanumeric1) {
                leftPointer++;
            }
            if (!isalphanumeric2) {
                rightPointer--;
            }
            if(isalphanumeric1 && isalphanumeric2) {
                leftPointer++;
                rightPointer--;
            }
           
        }
        return true;
    }
};