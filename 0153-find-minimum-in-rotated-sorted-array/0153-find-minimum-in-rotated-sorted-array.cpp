class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
    int l = 0;
    int r = n - 1;

    while (l <= r) {
        // If the array is already sorted, the first element is the minimum
        if (nums[l] <= nums[r]) {
            return nums[l];
        }

        int mid = l + (r - l) / 2;

        // Check if the mid element is the minimum
        if ((mid == 0 || nums[mid] < nums[mid - 1]) && (mid == n - 1 || nums[mid] < nums[mid + 1])) {
            return nums[mid];
        }

        // Decide whether to go left or right
        if (nums[mid] >= nums[l]) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    return -1; // This should no
    }
};