class Solution {
public:
void solve(vector<int>&candidates,int start,int target,vector<int>&v,vector<vector<int>>&res){
    if(target==0){
        res.push_back(v);
        return;
    }
    for(int i=start;i<candidates.size();i++){
        if(i>start && candidates[i]==candidates[i-1]){
            continue;
        }
        if(candidates[i]>target){
            break;
        }
        if(candidates[i]<=target){
            v.push_back(candidates[i]);
            solve(candidates,i+1,target-candidates[i],v,res);
            v.pop_back();
        }
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>v;
        vector<vector<int>>res;
        solve(candidates,0,target,v,res);
        return res;
    }
};