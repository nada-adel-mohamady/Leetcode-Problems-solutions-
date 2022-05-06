// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low, high;
        int mid;
        low = 1;
        high = n;
        while(low<=high){
            mid = low + (high - low) / 2;
            cout<<mid<<endl;
            if(isBadVersion(mid) && !isBadVersion(mid-1)) {
                return mid;
            }
            else if(isBadVersion(mid - 1)) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return 0;
        
    }
};