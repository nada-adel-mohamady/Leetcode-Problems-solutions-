class Solution {
public:
    int nCr(int n, int r)
    {
        return fact(n) / (fact(r) * fact(n - r));
    }
 
    // Returns factorial of n
    long fact(int n)
    {
        long res = 1;
        for (int i = 2; i <= n; i++)
            res = res * i;
        return res;
    }
 
    int numberOfArithmeticSlices(vector<int>& nums) {
        int res=0;
        int count=1;
        vector<int>num;
        for(int i=1; i<nums.size(); i++){
            num.push_back(nums[i]-nums[i-1]);
        }
        for(int i=1; i<num.size(); i++){
            if(num[i]==num[i-1]){
                count++;
            }
            else{
                res+=nCr(count,2);
                count=1;
            }
        }
        if(count>0){
            
            res+=nCr(count,2);
        }
        return res;
    }
};