class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
       vector<pair<int,string>>v;
       int n=heights.size();
       for(int i=0;i<n;i++){
        v.push_back({heights[i],names[i]});
       }
       sort(v.begin(),v.end());
         reverse(v.begin(),v.end());
       vector<string>res;
       for(int i=0;i<n;i++){
        res.push_back(v[i].second);
       }
       return res;
    }
};