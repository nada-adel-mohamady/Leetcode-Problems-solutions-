class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int>hash1;
        unordered_map<int, int>hash2;
        vector<int>res;
        int n = 0;
        for (auto num: nums1) {
            hash1[num] ++;
        }
        for (auto num: nums2) {
            hash2[num] ++;
        }
        for (auto num: nums1) {
            if (hash1[num] && hash2[num]) {
                n = min(hash1[num], hash2[num]);
                for (int i = 0; i < n; i++) {
                    res.push_back(num);
                }
                hash1[num] = 0;
                hash2[num] = 0;
            }
        }
        return res;
    }
};