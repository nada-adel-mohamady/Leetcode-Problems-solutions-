class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int>hash;
        vector<int> res;
        for (auto num: nums1) {
            hash[num] = 1;
        }
        for (auto num: nums2) {
            if(hash[num]) {
                res.push_back(num);
                hash[num] = 0;
            }
        }
        return res;
    }
};