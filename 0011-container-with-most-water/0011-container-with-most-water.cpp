class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater=0;
        int n=height.size();
        int i=0,j=n-1;
        while(i<=j){
            if(height[i]<height[j]){
                maxwater=max(maxwater,height[i]*(j-i));
                i++;
            }
            else{
                maxwater=max(maxwater,height[j]*(j-i));
                j--;
            }
        }
        return maxwater;

    }
};