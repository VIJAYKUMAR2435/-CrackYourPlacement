class Solution {
public:
   void solve(int n,int open,int close,string s,vector<string>&ans){
          if(2*n==s.length()){
                ans.push_back(s);
                return;
          }
          if(open<n){
          solve(n,open+1,close,s+'(',ans);
          }
          if(close<open){
            solve(n,open,close+1,s+")",ans);
          }

   }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
       solve(n,0,0,"",ans);
       return ans;
    }
};