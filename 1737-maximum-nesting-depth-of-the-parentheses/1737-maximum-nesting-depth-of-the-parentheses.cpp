class Solution {
public:
    int maxDepth(string s) {
        int n=s.size();
        int maxc=0;
        int c=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                c++;
                if(maxc<c){
                    maxc=c;
                }
            }
                else{
                    if(s[i]==')'){
                        c--;
                    }
                
            }
        }
        return maxc;
    }
};