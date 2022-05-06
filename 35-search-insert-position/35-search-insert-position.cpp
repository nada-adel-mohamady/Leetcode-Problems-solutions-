class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int mid;
        while(low<high){
            mid=(high+low)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                high=mid-1;
                
            }
            else{
                low=mid+1;
            }
        }
        if(nums[low]<target){
            return low+1;
        }
        else{
            return low;
        }
     
    }
};