class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int asz=a.size()-1;
        int bsz=b.size()-1;
        int carry=0;
        while(asz>=0||bsz>=0||carry){
            if(asz>=0){
                carry+=a[asz--]-'0';
            }
            if(bsz>=0){
                carry+=b[bsz--]-'0';
            }
           ans+=carry%2+'0';
           carry/=2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};