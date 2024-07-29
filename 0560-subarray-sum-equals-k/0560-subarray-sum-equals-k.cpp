class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        int c=0;
        for(int i=0;i<nums.size();i++){
            sum=nums[i];
            if(sum==k){
                c++;
            }
            for(int j=i+1;j<nums.size();j++){
                sum+=nums[j];
                if(sum==k){
                    c++;
                }
            }
        }
        return c;
    }
};