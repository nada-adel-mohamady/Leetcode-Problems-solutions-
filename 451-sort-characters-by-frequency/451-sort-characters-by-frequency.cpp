class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int>freq;
        priority_queue<pair<int, char>> pq;
        string res = "";
        pair<int, char>tmp;
        for (char c: s) {
            freq[c]++;
        }
        for (char c: s) {
            if (freq[c])
                pq.push(make_pair(freq[c], c));
            freq[c] = 0;
        }
        while (!pq.empty()) {
            tmp = pq.top();
            pq.pop();
            res+=string(tmp.first, tmp.second);
        }
        return res;
    }
};