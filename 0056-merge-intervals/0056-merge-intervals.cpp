class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>op;
        sort(intervals.begin(),intervals.end());
        for(auto interval:intervals){
            if(op.empty()||op.back()[1]<interval[0]){
                op.push_back(interval);
            }
            else{
                op.back()[1]=max(op.back()[1],interval[1]);
            }
        }
        return op;
    }
};