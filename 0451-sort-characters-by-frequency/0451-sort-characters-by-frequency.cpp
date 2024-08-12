class Solution {
public:
    string frequencySort(string s) {
       unordered_map<char,int>mp;
       for(int i=0;i<s.size();i++){
        mp[s[i]]++;
       }
       vector<pair<char,int>>v(mp.begin(),mp.end());
       sort(v.begin(),v.end(),[](pair<char,int>&a,pair<char,int>&b){
        return a.second>b.second;
       });
       string res="";
       for(auto p:v){
        res+=string(p.second,p.first);
       }
       return res;
    }
};