class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     int n=nums.size();
    // vector<int>op;
    // for(int i=0;i<n;i++){
    //     int prod=1;
    //     for(int j=0;j<n;j++){
    //         if(i==j){
    //             continue;
    //         }
    //         prod*=nums[j];
    //     }
    //     op.push_back(prod);

    // }
    // return op;
    vector<int>ans(n);
    vector<int>leftprod(n);
    vector<int>rightprod(n);
     leftprod[0]=1;
     for(int i=1;i<n;i++){
        leftprod[i]=leftprod[i-1]*nums[i-1];
     }
      rightprod[n-1]=1;
     for(int i=n-2;i>=0;i--){
        rightprod[i]=rightprod[i+1]*nums[i+1];
     }
     for(int i=0;i<n;i++){
        ans[i]=leftprod[i]*rightprod[i];
     }
     return ans;
    }
};