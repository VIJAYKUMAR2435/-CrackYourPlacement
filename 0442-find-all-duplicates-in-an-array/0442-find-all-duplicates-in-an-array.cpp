class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>v;
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto m:mp){
            if(m.second>1){
                v.push_back(m.first);
            }
        }
        return v;
    }
};