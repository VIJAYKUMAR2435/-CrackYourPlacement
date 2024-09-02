class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long totalChalk = 0;
    for (int i = 0; i < chalk.size(); i++) {
        totalChalk += chalk[i];
    }

    // Find the remainder when k is divided by the total sum of chalk
    k %= totalChalk;

    // Determine which student will replace the chalk
    for (int i = 0; i < chalk.size(); i++) {
        if (k < chalk[i]) {
            return i;
        }
        k -= chalk[i];
    }

    return -1; // This line should not be reached
    }
};