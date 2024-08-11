class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){
            return "";
        }

     sort(strs.begin(),strs.end());
     int n=strs.size();
     string s1=strs[0];
     string s2=strs[n-1];
     string res="";
     if(s1[0]!=s2[0]){
        return "";
     }
     for(int i=0;i<s1.size();i++){
        if(s1[i]==s2[i]){
            res+=s1[i];
        }
        else{
            break;
        }
     }
     return res;
    }
};