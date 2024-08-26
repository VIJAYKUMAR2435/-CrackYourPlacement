class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int n=s.length();
        int c=0;
        for(int i=0;i<n;i++){
int z=0,o=0;
            
            for(int j=i;j<n;j++){
                if(s[j]=='0'){
                    z++;
                }
                else{
o++;
                }
                if(z<=k||o<=k){
                    c++;
                }
                else{
                    break;
                }
            }
        }
        return c;
    }
};