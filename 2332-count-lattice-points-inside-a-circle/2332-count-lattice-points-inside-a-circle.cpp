class Solution {
public:
    int countLatticePoints(vector<vector<int>>& circles) {
       int n=circles.size();
       set<pair<int,int>>st;
       for(int i=0;i<n;i++){
        int a=circles[i][0];
        int b=circles[i][1];
        int r=circles[i][2];
        for(int x=-r;x<=r;x++){
            for(int y=-r;y<=r;y++){
                if((x*x)+(y*y)<=(r*r)){
                st.insert({x+a,y+b});
            }
            }
        }

       }
       return st.size();
    }
};