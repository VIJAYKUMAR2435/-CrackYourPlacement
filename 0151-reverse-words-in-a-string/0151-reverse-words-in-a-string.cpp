class Solution {
public:
    string reverseWords(string s) {
       
     int n=s.size();
     stack<string>st;
     string res="";
     for(int i=0;i<n;i++){
        if(s[i]==' '){
            continue;
        }
        string word="";
        while(i<n&&s[i]!=' '){
            word+=s[i];
            i++;
        }
        st.push(word);
     }
     while(!st.empty()){
        string a=st.top();
        st.pop();
        res+=a;
        if(!st.empty()){
            res+=" ";
        }
     }
     return res;

   


    }
};