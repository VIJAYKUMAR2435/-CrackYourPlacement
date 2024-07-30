class Solution {
public:
    int minimumDeletions(string s) {
        int res=0;
        int ct=0;
        for(char c:s){
            if(c=='b'){
                ct++;
            }
            else if(ct){
                res++;
                ct--;
            }
        }
        return res;
    }
};