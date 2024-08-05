class Solution {
public:
void solve(vector<int>nums,int n,int ind,vector<vector<int>>&res){
    if(ind==n){
        res.push_back(nums);
        return;
    }
    for(int i=ind;i<n;i++){
        if(ind!=i&&nums[ind]==nums[i]){
            continue;
        }
        swap(nums[ind],nums[i]);
        solve(nums,n,ind+1,res);
      //  swap(nums[ind], nums[i]);

    }

}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        solve(nums,n,0,res);
        return res;
    }
};