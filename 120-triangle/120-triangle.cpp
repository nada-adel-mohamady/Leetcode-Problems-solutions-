class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int num_layers = triangle.size(); 
        vector<int>minlen(triangle.back());
        for(int layer = num_layers - 2; layer >= 0; layer--) {
            for(int node = 0; node <= layer; node++) {
                minlen[node] = min(minlen[node], minlen[node + 1]) + triangle[layer][node];
             } 
        }
        return minlen[0];
    }
    

    
    
};