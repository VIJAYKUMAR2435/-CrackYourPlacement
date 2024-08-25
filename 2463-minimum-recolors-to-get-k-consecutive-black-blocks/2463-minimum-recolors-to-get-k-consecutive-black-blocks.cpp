class Solution {
public:
     
    int minimumRecolors(string blocks, int k) {
     int i=0;
     int j=0;
     int c=0;
     int mini=INT_MAX;
     int n=blocks.size();
     while(j<n){
        if(blocks[j]=='W'){
            c++;
        }
        if(j-i+1==k){
            mini=min(mini,c);
            if(blocks[i]=='W'){
                c--;
            }
            i++;
        }
        j++;
     }
     return mini;
    }
};