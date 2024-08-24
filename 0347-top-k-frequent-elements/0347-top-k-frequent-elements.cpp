class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int>mp;
       int n=nums.size();
      for(int i=0;i<n;i++){
        mp[nums[i]]++;
      }
      vector<int>v;
      priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minh;
     // int n=nums.size();
      for(auto m:mp){
        minh.push({m.second,m.first});
        if(minh.size()>k){
            minh.pop();
        }
         
      }
       while(minh.size()>0){
        v.push_back(minh.top().second);
        minh.pop();
      }
      
     
      return v;
    }
};