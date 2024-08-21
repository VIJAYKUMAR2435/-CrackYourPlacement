class Solution {
public:
    int lengthOfLongestSubstring(string s) {
          int n=s.size();
          int left=0;
          unordered_set<char>st;
          int c=0;
          int maxlen=0;
          for(int right=0;right<n;right++){
            if(st.count(s[right])==0){
                st.insert(s[right]);
                maxlen=max(maxlen,right-left+1);
            }
            else{
                while(st.count(s[right])){
                    st.erase(s[left]);
                    left++;
                }
                st.insert(s[right]);
            }
          }
          return maxlen;

    }
};