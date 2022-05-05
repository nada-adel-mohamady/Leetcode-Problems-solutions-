class Solution {
public:
  
    int search(vector<int>& nums, int target) {
     int low = 0;
     int high = nums.size();
     int mid;
     while(low<=high){
         mid=low+(high-low)/2;
         if(mid==nums.size())return -1;
         if(nums[mid]==target)
             return mid;
         else if(target<nums[mid])
             high=mid-1;
         else 
             low=mid+1;
         
     }
      return -1;
       
    }
};