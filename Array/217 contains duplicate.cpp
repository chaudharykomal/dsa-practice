#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    return true; // duplicate found
                }
            }
        }
        return false; // no duplicates
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> nums = {1, 2, 3, 4};

    // Call function
    bool result = sol.containsDuplicate(nums);

    // Print result
    cout << (result ? "true" : "false") << endl;

    return 0;
}
