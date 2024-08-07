class Solution {
public:
    string convertToTitle(int colNumber) {
        string res="";
       while(colNumber>0){
            int rem=(colNumber-1)%26;
            char letter='A'+rem;
          res=letter+res;
          colNumber=(colNumber-1)/26;

       }
       return res;
    }
};