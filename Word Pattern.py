class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        dic={}
        word_dic={}
        for i in range(len(pattern)): 
            if pattern[i] not in dic:
                dic[pattern[i]]=[i]
            else:
                dic[pattern[i]].append(i)
        
        s=s.split()
    
        for i in range(len(s)):
            if s[i] not in word_dic:
                word_dic[s[i]]=[i]
            else:
                word_dic[s[i]].append(i)
        if len(dic)!=len(word_dic):
            return False
        for (k,v), (k2,v2) in zip(dic.items(), word_dic.items()):
            if v!=v2:
                return False 
        return True
       
