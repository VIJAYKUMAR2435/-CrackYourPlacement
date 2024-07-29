class Solution {
public:
bool solve(vector<vector<char>>&board,string word,int idx,int i,int j){
    if(idx==word.size()){
        return true;
    }
    if(i<0||i>=board.size()||j<0||j>=board[0].size()||board[i][j]!=word[idx]){
        return false;
    }
    board[i][j]='v';
    bool nextword=solve(board,word,idx+1,i-1,j)||solve(board,word,idx+1,i+1,j)||solve(board,word,idx+1,i,j-1)||solve(board,word,idx+1,i,j+1);
    board[i][j]=word[idx];
    return nextword;
}
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(solve(board,word,0,i,j)){
                    return true;
                }
            }
        }
        return false;
    }
};