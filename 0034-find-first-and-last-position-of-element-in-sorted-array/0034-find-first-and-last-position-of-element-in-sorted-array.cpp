class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    int strt=-1,end=-1;
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]==target){
            strt=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(nums[i]==target){
            end=i;
            break;
        }
    }
    return {strt,end};
    }
};