class Solution {
public:

    int threeSumClosest(vector<int>& nums, int target) {
        int t;
        int minDiff=100000, minSum;
        int j, k;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-1; i++){
            j=i+1;
            k=nums.size()-1;   
            while(j<k){
                t=nums[i]+nums[j]+nums[k];
                if(target>t){
                    j++;
                }
                else if(target<t){
                    k--;
                }
                else if(target==t){
                    return t;
                }

                if(minDiff>abs(target-t)){
                    minDiff=abs(target-t);
                    minSum=t;
                }
            }
        }
       return minSum; 
    }
};