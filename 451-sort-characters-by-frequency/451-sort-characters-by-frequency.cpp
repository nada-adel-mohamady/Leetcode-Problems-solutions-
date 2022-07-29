class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int>freq;
        priority_queue<pair<int, char>> pq;
        string str = "";
        pair<int, char>tmp;
        for (auto c: s) {
            freq[c]++;
        }
        for (auto c: s) {
            if (freq[c])
                pq.push(make_pair(freq[c], c));
            freq[c] = 0;
        }
        while (!pq.empty()) {
            tmp = pq.top();
            pq.pop();
            str+=string(tmp.first, tmp.second);
        }
        return str;
    }
};