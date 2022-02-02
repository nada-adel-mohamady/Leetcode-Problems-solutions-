class Solution:
    def longestPalindrome(self, s: str) -> int:
        dic={}
        one=True 
        res=0
        for c in s: 
            if c not in dic:
                dic[c]=1
            else: 
                dic[c]+=1
            if dic[c]==2:
                res+=2
                dic[c]=0
        
        for c in s: 
            if dic[c]==1:
                res+=1
                break
        return res