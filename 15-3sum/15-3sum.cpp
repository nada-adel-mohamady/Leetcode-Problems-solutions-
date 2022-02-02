class Solution {
public:

    vector<vector<int>> threeSum(vector<int>& nums) {
        int target;
        vector<int>res;
        vector<vector<int>>finalResult;
        int n=nums.size();
        int l,r,s;
        sort(nums.begin(), nums.end());
        for(int  i=0;i<(n-2);i++){
    
            if((i>0)&&(nums[i]==nums[i-1]))continue;
            if(nums[i]>0)break;
            target=-1*nums[i];
            l=i+1;
            r=nums.size()-1;
            while(l<r){
                s=nums[l]+nums[r];
                if(s<target){
                    l++;
                }
                else if(s>target){
                    r--;
                }
                else{
                    finalResult.push_back(vector<int>{nums[i], nums[l], nums[r]});
                    while((l+1<r)&& (nums[l]==nums[l+1]))l++;
                    while((l<r-1)&&(nums[r]==nums[r-1]))r--;
                    l++;
                    r--;
                }
            }
       
         
        }
        return finalResult;
    }
};