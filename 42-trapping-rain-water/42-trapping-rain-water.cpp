class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()<=2)return 0;
        int maxL=height[0];
        int maxR=height.back();
        int L=0;
        int R=height.size()-1;
        int water;
        int res=0;
        while(L<R){
            if(maxL<=maxR){
                L++;
                if(height[L]>maxL)maxL=height[L];
                res+=maxL-height[L];   

            }
            else{
                R--;
                if(height[R]>maxR)maxR=height[R];
                res+=maxR-height[R]; 
            }     
            
        }
       
        return res;
    }
};
