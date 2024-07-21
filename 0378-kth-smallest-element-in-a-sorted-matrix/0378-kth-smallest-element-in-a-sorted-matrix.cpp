class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>v;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                v.push_back(matrix[i][j]);
                
            }
        }
        priority_queue<int>maxh;
        for(int i=0;i<v.size();i++){
            maxh.push(v[i]);
            if(maxh.size()>k){
                maxh.pop();
            }
        }
        return maxh.top();

    }
};