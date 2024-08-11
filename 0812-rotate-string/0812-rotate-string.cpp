class Solution {
public:
    bool rotateString(string s, string goal) {
        string ss=s+s;
        int n=ss.size();
        if(ss.find(goal)!=string::npos&&s.size()==goal.size()){
            return true;
        }
        return false;
    }
};