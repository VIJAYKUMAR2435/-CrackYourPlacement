class Solution {
public:
    void rotate(vector<int>& nums, int k) {
      int n=nums.size();
      int temp[n];
      k=k%n;
      for(int i=0;i<n;i++){
        temp[(i+k)%n]=nums[i];
      }
      for(int i=0;i<n;i++){
        nums[i]=temp[i];
      }
      return;
    }
};