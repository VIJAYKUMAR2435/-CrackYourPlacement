class Solution {
public:
     
    int minimumRecolors(string blocks, int k) {
      int i = 0;
    int j = 0;
    int c = 0;  // Count of 'w' in the current window
    int n = blocks.size();
    int mini = INT_MAX;

    while (j < n) {
        // Count 'w' in the current window
        if (blocks[j] == 'W') {
            c++;
        }

        // When the window size is exactly k
        if (j - i + 1 == k) {
            mini = min(mini, c);  // Update the minimum recolors needed
            
            // If the leftmost block is 'w', decrease the count
            if (blocks[i] == 'W') {
                c--;
              
            }
            // Slide the window
           i++;
        }
       

        // Expand the window
        j++;
    }

    return mini;  // Return the minimum recolors required
    }
};