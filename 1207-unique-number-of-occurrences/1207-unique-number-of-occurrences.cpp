class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> occurances;
        set<int> tmp;
        for(int i = 0; i < arr.size(); i++) {
            occurances[arr[i]] += 1;
        }
        for(int i = 0; i < arr.size(); i++) {
            tmp.insert(occurances[arr[i]]);
        }
        return tmp.size() == occurances.size();
    }
};