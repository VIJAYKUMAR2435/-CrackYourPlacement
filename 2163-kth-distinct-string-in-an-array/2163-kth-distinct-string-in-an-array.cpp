class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mp;
        for(auto str:arr){
            mp[str]++;
        }
        vector<string>v;
        for(auto m:arr){
            if(mp[m]==1){
                v.push_back(m);
            }
        }
        if(v.size()<k){
            return "";
        }
        // priority_queue<string,vector<string>,greater<string>>minh;
        // for(int i=0;i<v.size();i++){
        //   minh.push(v[i]);
        //   while(minh.size()>k){
        //     minh.pop();
        //   }
        // }
        // return minh.top();
        return v[k-1];

    }
};