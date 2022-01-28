class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mp;
        for(string s: strs){
            string sorted_str=s;
            sort(sorted_str.begin(), sorted_str.end());
            mp[sorted_str].push_back(s);
        }
        vector<vector<string>>anagrams;
        for(auto p: mp){
            anagrams.push_back(p.second);
        }
        return anagrams;
    }
};