class Solution {
public:
    string frequencySort(string s) {
      unordered_map<char,int>mp;
      for(auto i:s){
        mp[i]++;
      }
      vector<pair<char,int>>v(mp.begin(),mp.end());
      sort(v.begin(),v.end(),[](pair<char,int>&a,pair<char,int>&b){
return a.second>b.second;
      });
      string res="";
      for(auto m:v){
        res+=string(m.second,m.first);
      }
      return res;
    }
};