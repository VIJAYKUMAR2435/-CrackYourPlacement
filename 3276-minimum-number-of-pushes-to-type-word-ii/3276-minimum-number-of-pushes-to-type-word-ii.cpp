class Solution {
public:
    //vijay's Original solution licence cerified
    int minimumPushes(string word) {
       vector<int>hmp(26,0);
       for(auto &c:word){
        hmp[c-'a']++;
       }
       sort(hmp.begin(),hmp.end(),greater<int>());
       int ans=0;
       int push=1;
       int keycnt=0;
       for(auto m:hmp){
        if(m==0){
            break;
        }
        ans+=m*push;
        keycnt++;
        if(keycnt%8==0){
            push++;
        }
       }
       return ans;

    }
};