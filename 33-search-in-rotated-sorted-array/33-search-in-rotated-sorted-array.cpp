class Solution {
public:
    int search(vector<int>& nums, int target) {
        //if(nums.size()==1 && nums[0]==target)return 0;
        int mid, high, low;
        int n=nums.size()-1;
        low=0;
        high=n;
        
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]==target)return mid;
            if(nums[low]==target)return low;
            if(nums[high]==target)return high;    
            if(nums[mid]<nums[high]){
                if(target>nums[mid] && target<nums[high])
                    low=mid+1;
                else 
                    high=mid-1;
            }
            else if(nums[low]<nums[mid]){
                if(target>nums[low] && target<nums[mid])
                    high=mid-1;
                else 
                    low=mid+1;
            }
            else 
                return -1;

        }
        return -1;
    }
};