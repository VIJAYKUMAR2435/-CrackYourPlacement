class Solution {
public:
void solve(int n,int k,vector<int>&v,int ind,vector<vector<int>>&ans){
        if(v.size()==k){
            ans.push_back(v);
            return;
        }
       for(int i=ind;i<n+1;i++){
        v.push_back(i);
        solve(n,k,v,i+1,ans);
        v.pop_back();
       }
}
    vector<vector<int>> combine(int n, int k) {
        vector<int>v;
        vector<vector<int>>ans;
        solve(n,k,v,1,ans);
        return ans;
    }
};