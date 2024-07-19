class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
         
        vector<int> ans;
        unordered_set<int> s;
        for(auto x:matrix){
            int i=x[0];
            for(auto y:x)
                i=min(i,y);
            s.insert(i);
        }
        for(int j=0;j<m;j++){
            int x=0;
            for(int i=0;i<n;i++)
                x=max(x,matrix[i][j]);
            if(s.count(x))
                ans.push_back(x);
        }
        return ans;
    }
};