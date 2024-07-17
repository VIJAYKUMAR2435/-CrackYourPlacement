class Solution {
public:
bool palindrome(string s,int l,int r){
    while(l<=r){
        if(s[l]!=s[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}
    bool validPalindrome(string s) {
        int n=s.size();
        int l=0;
        int r=n-1;
        if(palindrome(s,l,r)){
            return true;
        }
       while(l<=r){
        if(s[l]!=s[r]){
            return palindrome(s,l,r-1)||palindrome(s,l+1,r);
        }
        else{
            l++;
            r--;
        }
       }
        return false;
    }
};