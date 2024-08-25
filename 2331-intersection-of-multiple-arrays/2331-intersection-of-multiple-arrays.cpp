class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
      int n=nums.size();
      //int m=nums[i].size();
      vector<int>v;
      map<int,int>mp;
      for(int i=0;i<n;i++){
        for(int j=0;j<nums[i].size();j++){
            mp[nums[i][j]]++;
        }
      }
      for(auto m:mp){
        if(m.second==n){
            v.push_back(m.first);
        }
      }
      return v;
    }
};