class Solution:
    def checkIfPangram(self, sentence: str) -> bool:
        dic={}
        for ch in sentence:
            dic[ch]=1
        return len(dic)==26