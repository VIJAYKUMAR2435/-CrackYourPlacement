class Solution {
public:
    int strStr(string haystack, string needle) {
  
 int n=needle.size();
 int m=haystack.size();
 if(m<n){
    return -1;
 }
 for(int i=0;i<=m-n;i++){
   if(haystack.substr(i,needle.size())==needle){
    return i;
   }
 }
 return -1;
    }
};