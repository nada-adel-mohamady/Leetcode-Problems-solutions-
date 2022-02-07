class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int count=0;
        int prev=nums[0];
        for(int i=1; i<nums.size(); i++){
            if(nums[i]<=prev){
                if(i-2>=0 && nums[i-2]<nums[i]){
                    prev=nums[i];
                }
                else if(i==1){
                    prev=min(nums[i], prev);
                }
                count++;
            }
            else{
                prev=nums[i];
            }
        }
        return count<=1;
    }
};