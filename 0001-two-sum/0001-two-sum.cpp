class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<int>res;
      int n=nums.size();
      unordered_map<int,int>mp;
      for(int i=0;i<n;i++){
        int comple=target-nums[i];
        if(mp.find(comple)!=mp.end()){
            res.push_back(mp[comple]);
            res.push_back(i);
        }
        mp[nums[i]]=i;
      }
      return res;
    }
};