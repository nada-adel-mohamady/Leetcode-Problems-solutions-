class Solution:

    def bactrack(self, nums, tmp, res):
        if len(tmp)==len(nums):
            tuna=tmp[:]
            res.append(tuna)         
            return
        
        for i in range(len(nums)):
            if nums[i] not in tmp:
                tmp.append(nums[i])
                self.bactrack(nums, tmp, res)   
            else:
                continue 
            tmp.pop()
            
    def permute(self, nums: List[int]) -> List[List[int]]:
        res=[]
        tuna=[]
        self.bactrack(nums, tuna, res)
        return res
        