class Solution {
public:

    string longestPalindrome(string s) {
        int start=0;
        int end=0;
        int len;
        int maxLen=0;
       for(int i=0; i<s.length(); i++){
           int len1=expandPalindromic(s, i, i);
           int len2=expandPalindromic(s, i, i+1);
           len = max(len1, len2);
      
           if(len>maxLen){
               start=i-((len-1)/2);
               maxLen=len;
           }
       }
   
        return s.substr(start, maxLen);
    }
    
    int expandPalindromic(string s, int left, int right){
        if(left>right)return 0;
        while(left>=0 && right<s.length() &&s[left]==s[right] ){
            left--;
            right++;
        }
        return right-left-1;
    }
};