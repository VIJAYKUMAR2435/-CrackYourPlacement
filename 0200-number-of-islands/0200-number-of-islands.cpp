#include <vector>

using namespace std;

class Solution {
public:
   void dfs(vector<vector<char>>&grid,int i,int j){
   int n=grid.size();
   int m=grid[0].size();
   if(i<0||i>=n||j<0||j>=m||grid[i][j]!='1'){
    return;
   }
 grid[i][j]='visited';
  dfs(grid,i-1,j);
  dfs(grid,i+1,j);
  dfs(grid,i,j-1);
  dfs(grid,i,j+1);
   }
    int numIslands(vector<vector<char>>& grid) {
      int n=grid.size();
      int m=grid[0].size();
      int c=0;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]=='1'){
                c++;
                dfs(grid,i,j);
            }
        }
      }
      return c;
    }
};
