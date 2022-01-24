class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int res=0;
        int count=0;
        vector<int>num;
        for(int i=1; i<nums.size(); i++){
            num.push_back(nums[i]-nums[i-1]);
        }
        for(int i=1; i<num.size(); i++){
            if(num[i]==num[i-1]){
                count++;
            }
            else{
                res+=(count+1)*count/2;
                count=0;
            }
        }
        if(count>0){
            
            res+=(count+1)*count/2;
        }
        return res;
    }
};