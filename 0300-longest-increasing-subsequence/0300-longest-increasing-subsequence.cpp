class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
         if (nums.empty()) return 0;

vector<int> dp(nums.size(), 1);
    int maxLength = 1;

    for (size_t i = 1; i < nums.size(); ++i) {
        for (size_t j = 0; j < i; ++j) {
            if (nums[i] > nums[j]) {
                dp[i] = std::max(dp[i], dp[j] + 1);
            }
        }
        maxLength = std::max(maxLength, dp[i]);
    }

    return maxLength;
    }
};