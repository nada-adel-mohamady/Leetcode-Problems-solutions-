class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int maxArea=-1;
        while(i<j){
            if(height[i]<height[j]){
                maxArea=max(maxArea, height[i]*(j-i));
                i++;
            }
            else{
                maxArea=max(maxArea, height[j]*(j-i));
                j--;
            }
            
        }
        return maxArea;
    }
};