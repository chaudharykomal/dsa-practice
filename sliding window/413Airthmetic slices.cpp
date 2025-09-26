#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int total = 0;   // total number of arithmetic subarrays
        int curr = 0;    // number of arithmetic subarrays ending at index i

        for (int i = 2; i < nums.size(); i++) {
            if ((nums[i] - nums[i - 1]) == (nums[i - 1] - nums[i - 2])) {
                curr = curr + 1;   // extend previous arithmetic subarray
                total += curr;     // add all new subarrays ending here
            } else {
                curr = 0;          // reset if pattern breaks
            }
        }
        return total;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 3, 5, 7, 9};
    cout << "Number of arithmetic subarrays: " << sol.numberOfArithmeticSlices(nums) << endl;

    return 0;
}
