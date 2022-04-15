class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int start_merge, end_merge;
        bool cont=false;
        vector<vector<int>>res;
        sort(intervals.begin(), intervals.end());
        end_merge=intervals[0][1];
        if(intervals.size()==1 || intervals.size()==0)return intervals;
        for(int i=0; i<intervals.size(); i++){
            end_merge=max(end_merge, intervals[i][1]);
            if(i<intervals.size()-1 && !cont && intervals[i+1][0]<=end_merge){
                start_merge=intervals[i][0];
                end_merge=max(end_merge, intervals[i][1]);
                cont=true;
            }
            else if(i<intervals.size()-1 && cont && intervals[i+1][0]<=end_merge){
                end_merge=max(end_merge, intervals[i][1]);
                continue;
                
            }
            else if(cont){
                cont=false;
                end_merge=max(end_merge, intervals[i][1]);
                res.push_back(vector<int>{start_merge, end_merge});
            }
            else{
                res.push_back(intervals[i]);
            }
        }
        
        return res;
    }
};