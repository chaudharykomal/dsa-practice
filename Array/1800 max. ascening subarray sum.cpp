#include <bits/stdc++.h>
using namespace std;

int maxIncreasingSubarraySum(vector<int>& nums) {
    if (nums.empty()) return 0;

    int currSum = nums[0];
    int maxSum = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > nums[i - 1]) {
            currSum += nums[i];  // continue adding
        } else {
            currSum = nums[i];   // start new subarray
        }
        maxSum = max(maxSum, currSum);
    }

    return maxSum;
}

int main() {
    vector<int> nums = {1, 2, 3, 2, 5, 6};
    cout << maxIncreasingSubarraySum(nums);  // Output: 13
}
