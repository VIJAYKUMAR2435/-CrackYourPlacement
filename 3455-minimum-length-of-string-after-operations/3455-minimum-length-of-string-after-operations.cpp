class Solution {
public:
    int minimumLength(string s) {
       int n=s.length();
       unordered_map<int,int>mp;
       int del=0;
       for(int i=0;i<n;i++){
        mp[s[i]]++;
       }
       for(auto m:mp){
       int f=m.second;
        del+=(f%2)?f-1:f-2;

       }
       return n-del;
    
    }
};