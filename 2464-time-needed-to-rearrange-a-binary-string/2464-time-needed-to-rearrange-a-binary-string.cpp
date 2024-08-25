class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int n=s.size();
        int c=0;
        for(int i=0;i<n;i++){
         bool flag=false;
         for(int j=0;j<n-1;j++){
           if(s[j]=='0'&&s[j+1]=='1'){
            s[j]='1';
            s[j+1]='0';
            j++;
flag=true;
           }
         }
         if(flag){
            c++;
        }
        }
        return c;
        
    }
};