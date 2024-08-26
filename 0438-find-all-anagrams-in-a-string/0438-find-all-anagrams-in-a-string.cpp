class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>res;
        vector<int>goal(26);
        vector<int>curr(26);
        for(auto c:p){
            goal[c-'a']++;
        }
        for(int i=0;i<s.size();i++){
            curr[s[i]-'a']++;
            if(i>=p.size()){
                curr[s[i-p.size()]-'a']--;
            }
            if(curr==goal){
                res.push_back(i-p.size()+1);
            }
        }
        return res;
            }
};