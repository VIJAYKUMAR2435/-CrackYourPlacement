class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        vector<vector<int>>op;
        int c=0;
        sort(intervals.begin(),intervals.end());
for(auto interval:intervals){
    if(op.empty()||op.back()[1]<=interval[0]){
        op.push_back(interval);
    }
    else{
        op.back()[1]=min(op.back()[1],interval[1]);
        c++;
    }
}
return c;
    }
};