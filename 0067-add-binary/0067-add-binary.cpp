
class Solution {
public:

    string addBinary(string a, string b) {
        
        int a_size=a.size()-1;
        int b_size=b.size()-1;
        int carry=0;
        string sum;
        while(a_size>=0||b_size>=0||carry){
               if(a_size>=0){
                carry+=a[a_size--]-'0';
               }
               if(b_size>=0){
                carry+=b[b_size--]-'0';
               }
               sum+=carry%2+'0';
               carry/=2;
        }
        reverse(sum.begin(),sum.end());
        return sum;
        
    }
};
