class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        count=0
        flag=0
        if len(strs)==0:
            return ""
        strs = sorted(strs, key=len) 
        for i in range(len(strs)):
            if strs[i]=="":
                return ""
                
        for j in range(len(strs[0])):
            if flag:
                break
            for i in range(1,len(strs)):
                if strs[i][j]!=strs[0][j]:
                    flag=1
                    break
            if flag==0:
                count+=1
        return strs[0][0:count]