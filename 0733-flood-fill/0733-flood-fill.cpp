class Solution {
public:
void dfs(vector<vector<int>>&img,int i,int j,int val,int newcolor){
    if(i<0||i>=img.size()||j<0||j>=img[0].size()||img[i][j]==newcolor||img[i][j]!=val){
        return;
    }
    img[i][j]=newcolor;
    dfs(img,i-1,j,val,newcolor);
    dfs(img,i+1,j,val,newcolor);
    dfs(img,i,j-1,val,newcolor);
    dfs(img,i,j+1,val,newcolor);
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int val=image[sr][sc];
        dfs(image,sr,sc,val,color);
        return image;
    }
};