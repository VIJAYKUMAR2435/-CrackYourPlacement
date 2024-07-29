class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        // int sum=0;
        // int c=0;
        // for(int i=0;i<nums.size();i++){
        //     sum=nums[i];
        //     if(sum==k){
        //         c++;
        //     }
        //     for(int j=i+1;j<nums.size();j++){
        //         sum+=nums[j];
        //         if(sum==k){
        //             c++;
        //         }
        //     }
        // }
        // return c;
        int n=arr.size();
        int prefix[n];
        prefix[0]=arr[0];
        int c=0;
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+arr[i];
            
        }
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(prefix[i]==k){
                c++;
            }
            if(mp.find(prefix[i]-k)!=mp.end()){
                c+=mp[prefix[i]-k];
            }
            mp[prefix[i]]++;
        }
        return c;
    }
};