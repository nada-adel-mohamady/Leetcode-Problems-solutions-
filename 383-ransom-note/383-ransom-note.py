class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        ransomNote_hashmap = {}
        magazine_hashmap = {}
        for char in magazine: 
            if char not in magazine_hashmap:
                magazine_hashmap[char] = 1
            else:
                magazine_hashmap[char] += 1
        
        for char in ransomNote:
            if char not in magazine_hashmap or magazine_hashmap[char]==0:
                return False
            else:
                #found char to construct ransomeNote
                magazine_hashmap[char] -= 1
        
        return True