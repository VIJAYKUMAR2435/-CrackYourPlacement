class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums1[i]]=-1;
        }
        for(int i=0;i<m;i++){
            for(int j=i;j<m;j++){
                if(nums2[i]<nums2[j]){
                    mp[nums2[i]]=nums2[j];
                    break;
                }
            }
        }
        vector<int>v;
        for(int i=0;i<n;i++){
          v.push_back(mp[nums1[i]]);
        }
        return v;
    }
};
