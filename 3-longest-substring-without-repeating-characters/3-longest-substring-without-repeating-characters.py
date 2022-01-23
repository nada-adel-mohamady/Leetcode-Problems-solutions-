class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if s=="":
            return 0
        maxLen=1
        for start in range(len(s)):
            for j in range(start+1, len(s)):
                 if s[j] in s[start:j]:
                        break
                 else:
                    maxLen=max(maxLen, j-start+1)
        return maxLen
            
                    
                    