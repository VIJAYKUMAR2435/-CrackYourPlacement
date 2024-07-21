class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minh;
        for(auto m:mp){
            minh.push({m.second,m.first});
            if(minh.size()>k){
                minh.pop();
            }
        }
        vector<int>v;
        while(minh.size()>0){
            v.push_back(minh.top().second);
            minh.pop();
        }
        return v;
    }

};