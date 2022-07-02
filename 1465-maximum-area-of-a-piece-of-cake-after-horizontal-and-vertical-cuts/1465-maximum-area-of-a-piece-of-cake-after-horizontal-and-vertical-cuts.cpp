class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        int maxH = horizontalCuts[0];
        int maxV = verticalCuts[0];
        
        for(int i = 1; i < horizontalCuts.size(); i++) {
            maxH = max(maxH, horizontalCuts[i] - horizontalCuts[i-1]);
        }
        for(int i = 1; i < verticalCuts.size(); i++) {
            maxV = max(maxV, verticalCuts[i] - verticalCuts[i-1]);
        }
        maxH = max(maxH, h - horizontalCuts.back());
        maxV = max(maxV, w - verticalCuts.back());
        long res = (long)maxH * (long)maxV % (1000000000 + 7);
        return res;
    }
};