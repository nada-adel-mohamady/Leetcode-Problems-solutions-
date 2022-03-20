class Solution {
public:
    int findComplement(int num) {
        int ones = 0;
        int number = num;
        while(num) {
            num = num >> 1;
            ones = ones*2 + 1;
        }
        return ones - number;
    }
};