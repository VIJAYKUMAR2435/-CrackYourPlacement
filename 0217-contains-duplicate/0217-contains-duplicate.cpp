class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        set<int>seen;
        for(int i=0;i<n;i++){
            if(seen.count(nums[i])>0){
                return true;
            }
            seen.insert(nums[i]);
        }
        return false;
    }
};