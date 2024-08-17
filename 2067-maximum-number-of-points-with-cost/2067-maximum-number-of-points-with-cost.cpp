class Solution {
private:
    vector<vector<long long>> dp; 
    vector<long long> left,right;
    long long helper(int col,int row,vector<vector<int>>& points){
        if(row == 0) return dp[row][col] = points[row][col];
        if(dp[row][col] != -1) return dp[row][col];
        if(col == 0) helper2(row,points);
        return dp[row][col] = max(left[col],right[col])+points[row][col];
    }
    void helper2(int r,vector<vector<int>> &p){
        left[0] = helper(0,r-1,p);
        for(int i=1; i<p[0].size(); i++)
            left[i] = max(left[i-1]-1,helper(i,r-1,p));

        right[p[0].size()-1] = helper(p[0].size()-1,r-1,p);
        for(int i=p[0].size()-2; i>=0; i--)
            right[i] = max(right[i+1]-1,helper(i,r-1,p));
    }
public:
    long long maxPoints(vector<vector<int>>& points) {
        dp = vector<vector<long long>>(points.size(),vector<long long>(points[0].size(),-1));
        right = left = vector<long long>(points[0].size(),INT_MIN);
        long long res = 0;
        for(int i=0; i<points[0].size(); i++){
            res = max(res,helper(i,points.size()-1,points));
        }
        return res;
    }
};