class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five_count = 0;
        int ten_count = 0;
        int twenty_count = 0;
        for(auto num: bills) {
            if(num == 5) {
                five_count++;
            }
            else if(num == 10) {
                if(five_count>0)
                    five_count--;
                else 
                    return false;
                ten_count++; 
            }
            else {
                twenty_count++;
                if(ten_count>0) {
                    ten_count--;
                    if(five_count>0)
                        five_count--;
                    else 
                        return false;
                }
                else {
                    if(five_count>=3) {
                        five_count-=3;
                    }
                    else {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};