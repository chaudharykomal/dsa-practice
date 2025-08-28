#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentsum = nums[0];   // start with first element
        int maxsum = nums[0];       // also initialize max with first element

        for (int i = 1; i < nums.size(); i++) {
            // restart if current sum is worse than starting fresh from nums[i]
            currentsum = max(nums[i], currentsum + nums[i]);

            // update maxsum if current sum is better
            maxsum = max(maxsum, currentsum);
        }
        return maxsum;
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    // Function call
    int result = sol.maxSubArray(nums);

    // Print output
    cout << "Maximum Subarray Sum = " << result << endl;

    return 0;
}
