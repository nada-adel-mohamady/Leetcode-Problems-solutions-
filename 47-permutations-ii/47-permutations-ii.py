class Solution:
    def bactrack(self, nums, tmp, res, indices):
        if len(tmp)==len(nums) and tmp not in res:
            tuna=tmp[:]
            res.append(tuna)         
            return
        
        for i in range(len(nums)):
            if i not in indices:
                tmp.append(nums[i])
                indices.append(i)
                self.bactrack(nums, tmp, res, indices)   
            else:
                continue 
            indices.pop()
            tmp.pop()  
    def permuteUnique(self, nums: List[int]) -> List[List[int]]:
        res=[]
        tuna=[]
        indices=[]
        self.bactrack(nums, tuna, res, indices)
       
        return res