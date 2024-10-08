class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
      int n=matrix.size();
        int m=matrix[0].size();
        reverse(matrix.begin(),matrix.end());//up to down(cloclwise rotation)
        // for(auto m:matrix){
        //     reverse(m.begin(),m.end())  reverse left to right//anticlockwise rotation
        // }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<m;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
};