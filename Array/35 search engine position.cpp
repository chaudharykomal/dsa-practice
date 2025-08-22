#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= target) {
                return i;  // target found OR should be inserted here
            }
        }
        return nums.size(); // target is bigger than all elements
    }
};

int main() {
    Solution sol;

    // Example test cases
    vector<int> nums1 = {1, 3, 5, 6};
    cout << "Insert position of 5: " << sol.searchInsert(nums1, 5) << endl; // Output: 2

    vector<int> nums2 = {1, 3, 5, 6};
    cout << "Insert position of 2: " << sol.searchInsert(nums2, 2) << endl; // Output: 1

    vector<int> nums3 = {1, 3, 5, 6};
    cout << "Insert position of 7: " << sol.searchInsert(nums3, 7) << endl; // Output: 4

    vector<int> nums4 = {1, 3, 5, 6};
    cout << "Insert position of 0: " << sol.searchInsert(nums4, 0) << endl; // Output: 0

    return 0;
}
