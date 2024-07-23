class Solution {
public:
static bool cmp(pair<int,int>p1,pair<int,int>p2){
  if(p1.second==p2.second){
        return p1.first>p2.first;
    }
    return p1.second<p2.second;

}
    vector<int> frequencySort(vector<int>& nums) {
          unordered_map<int,int>mp;
          vector<pair<int,int>>v;
          for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
          }
          for(auto m:mp){
            v.push_back({m.first,m.second});
          }
          vector<int>ans;
          sort(v.begin(),v.end(),cmp);
          for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].second;j++){
                  ans.push_back(v[i].first);
            }
          }
          return ans;
    }
};