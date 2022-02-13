class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int num_layers = triangle.size(); 
        vector<int>minsum(triangle.back());
        for(int layer = num_layers - 2; layer >= 0; layer--) {
            for(int node = 0; node <= layer; node++) {
                minsum[node] = min(minsum[node], minsum[node + 1]) + triangle[layer][node];
             } 
        }
        return minsum[0];
    }
    

    
    
};