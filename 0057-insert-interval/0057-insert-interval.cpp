class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
      vector<vector<int>>op;
      intervals.push_back(newInterval);
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