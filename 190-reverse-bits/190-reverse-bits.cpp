class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t num = 0;
        uint32_t zeros = 0;
        for (int i = 0; i < 32; i++) {
            num = num * 2;
            if(n % 2 == 1) {
                num++;
            }
            n/=2;
        } 
        return num;
    }
};