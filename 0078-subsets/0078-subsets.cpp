class Solution {
public:
    void solve(vector<int>&nums,int n,int ind,vector<int>&v,vector<vector<int>>&ans){
        ans.push_back(v);
        for(int i=ind;i<n;i++){
            if(i>ind && nums[i]==nums[i-1]){
                continue;
            }
            v.push_back(nums[i]);
            solve(nums,n,i+1,v,ans);
            v.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>v;
        vector<vector<int>>ans;
        solve(nums,n,0,v,ans);
        return ans;
    }
};