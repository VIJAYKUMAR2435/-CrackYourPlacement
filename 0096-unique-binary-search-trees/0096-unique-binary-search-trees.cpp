class Solution {
public:
    int numTrees(int n) {
      if(n<=1){
        return 1;
      }
      int ans=0;
      for(int i=1;i<=n;i++){
        ans+= numTrees(i-1)*numTrees(n-i);
      }
      return ans;
    }
    
};
// Base Case: If n is 0 or 1, there's only one possible BST that can be formed (an empty tree or a single-node tree), so the function returns 1.

// Recursive Case: For n greater than 1, the function goes into a loop that iterates from i = 1 to n. For each value of i, it calculates the number of unique BSTs that can be formed with i-1 nodes on the left and n-i nodes on the right.

// Recursion: The recursive calls numTrees(i-1) and numTrees(n-i) are used to calculate the number of unique BSTs for the left and right subtrees, respectively.

// Accumulation: For each value of i, the number of unique BSTs for that i is accumulated in the ans variable.

// Return: Once the loop finishes, the total accumulated value of ans is returned. This value represents the total number of unique BSTs that can be formed with n nodes.