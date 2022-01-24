class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        s_dic={}
        t_dic={}
        for ss in s:
            if ss not in s_dic:
                s_dic[ss]=1
            else:
                s_dic[ss]+=1
        for tt in t:
            if tt not in t_dic:
                t_dic[tt]=1
            else:
                t_dic[tt]+=1
        for tt in t:
            if tt not in s_dic or t_dic[tt]!=s_dic[tt]:
                return tt
        
        return ""
            