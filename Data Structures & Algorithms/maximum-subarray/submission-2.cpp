class Solution {
public:

    int crossingSum(vector<int>& nums, int left, int mid, int right) {

        int sum = 0;
        int leftSum = INT_MIN;

        // Maximum suffix sum of the left half
        for (int i = mid; i >= left; i--) {
            sum += nums[i];
            leftSum = max(leftSum, sum);
        }

        sum = 0;
        int rightSum = INT_MIN;

        // Maximum prefix sum of the right half
        for (int i = mid + 1; i <= right; i++) {
            sum += nums[i];
            rightSum = max(rightSum, sum);
        }

        return leftSum + rightSum;
    }

    int solve(vector<int>& nums, int left, int right) {

        // Base case
        if (left == right) {
            return nums[left];
        }

        int mid = left + (right - left) / 2;

        // Maximum subarray sum in the left half
        int leftMax = solve(nums, left, mid);

        // Maximum subarray sum in the right half
        int rightMax = solve(nums, mid + 1, right);

        // Maximum subarray sum crossing the midpoint
        int crossMax = crossingSum(nums, left, mid, right);

        return max({leftMax, rightMax, crossMax});
    }

    int maxSubArray(vector<int>& nums) {
        return solve(nums, 0, nums.size() - 1);
    }
};