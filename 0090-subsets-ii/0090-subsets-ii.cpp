class Solution {
public:
void solve(vector<int>&nums,int n,int ind,vector<int>&ds,vector<vector<int>>&ans){
    ans.push_back(ds);
    for(int i=ind;i<nums.size();i++){
        if(i>ind&&nums[i]==nums[i-1]){
            continue;
        }
        ds.push_back(nums[i]);
         solve(nums,n,i+1,ds,ans);
         ds.pop_back();
    }

    
   
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
           sort(nums.begin(), nums.end());
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>ds;
        solve(nums,n,0,ds,ans);
        return ans;

    }
};