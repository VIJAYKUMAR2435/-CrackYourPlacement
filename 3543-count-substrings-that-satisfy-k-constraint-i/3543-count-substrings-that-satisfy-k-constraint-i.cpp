class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int n=s.size();
       int i=0,j=0;
       int one=0;
       int zero=0;
       int ans=0;
       while(j<n){
         if(s[j]=='0'){
            zero++;
         }
         else{
            one++;
         }
         while(zero>k&&one>k){
            if(s[i]=='0'){
                zero--;
            }
            else{
                one--;
            }
            i++;
         }
         ans+=(j-i+1);
         j++;
       }
       return ans;
    }
};