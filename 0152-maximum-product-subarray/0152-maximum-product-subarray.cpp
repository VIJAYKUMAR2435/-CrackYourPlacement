class Solution {
public:

    int maxProduct(vector<int>& nums) {
        
       double maxp=INT_MIN;
       double suff=1;
       double pre=1;
       int n=nums.size();
     
       for(int i=0;i<n;i++){
        if(pre==0){
            pre=1;
        }
        if(suff==0){
            suff=1;
        }
        pre*=nums[i];
        suff*=nums[n-1-i];
        maxp=max(maxp,max(pre,suff));

       }
       return (int)maxp;

    }
};