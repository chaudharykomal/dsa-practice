#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double windowSum = 0;

        // Step 1: Sum of the first 'k' elements
        for (int i = 0; i < k; i++) {
            windowSum += nums[i];
        }

        double maxSum = windowSum;

        // Step 2: Slide the window
        for (int i = k; i < nums.size(); i++) {
            windowSum = windowSum - nums[i - k] + nums[i]; // remove old, add new
            maxSum = max(maxSum, windowSum);
        }

        // Step 3: Return maximum average
        return maxSum / k;
    }
};

int main() {
    Solution sol;

    // Input example
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;

    // Function call
    double result = sol.findMaxAverage(nums, k);

    // Output
    cout << "Maximum average of subarray of length " << k << " is: " << result << endl;

    return 0;
}
