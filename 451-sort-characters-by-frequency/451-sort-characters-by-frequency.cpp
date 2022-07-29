class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int>mp;
        priority_queue<pair<int, char> > pq;
        string str = "";
        char c;
        pair<int, char>tmp;
        for (auto c: s) {
            mp[c]++;
        }
        for (auto c: s) {
            if (mp[c])
                pq.push(make_pair(mp[c], c));
            mp[c] = 0;
        }
        while (!pq.empty()) {
            tmp = pq.top();
            pq.pop();
            c = tmp.second;
            str+=string(tmp.first, c);
        }
        return str;
    }
};