#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = accumulate(nums.begin(), nums.end(), 0);

        // Check if P is integer and target is achievable
        if ((sum + target) % 2 != 0 || sum < abs(target)) return 0;

        int P = (sum + target) / 2;

        // DP: number of subsets that sum to P
        vector<int> dp(P + 1, 0);
        dp[0] = 1; // 1 way to make sum 0 (pick nothing)

        for (int num : nums) {
            for (int j = P; j >= num; j--) {
                dp[j] += dp[j - num];
            }
        }

        return dp[P];
    }
};

int main() {
    Solution sol;

    // Example test case
    vector<int> nums = {1, 1, 1, 1, 1};
    int target = 3;

    int ways = sol.findTargetSumWays(nums, target);
    cout << "Number of ways to reach target " << target << " is: " << ways << endl;

    return 0;
}
