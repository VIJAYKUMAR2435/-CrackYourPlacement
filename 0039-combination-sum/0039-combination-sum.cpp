class Solution {
public:
    void solve(vector<int>&candidates,int target,int ind,vector<int>ds,vector<vector<int>>&ans){
      if (target == 0) {
        ans.push_back(ds);
        return;
    }
    if (ind == candidates.size()) {
        return;
    }
    if (target >= candidates[ind]) {
        ds.push_back(candidates[ind]);
        solve(candidates, target - candidates[ind], ind, ds, ans);
        ds.pop_back();
    }
    solve(candidates, target, ind + 1, ds, ans);
      

    
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      vector<vector<int>> ans;
    vector<int> ds;
    solve(candidates, target, 0, ds, ans);
    return ans;
    }
};