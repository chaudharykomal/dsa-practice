#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            ans ^= nums[i];  // XOR cancels duplicates
        }
        return ans;
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> nums = {4, 1, 2, 1, 2};

    // Call function
    int result = sol.singleNumber(nums);

    // Print result
    cout << "Single Number: " << result << endl;

    return 0;
}
