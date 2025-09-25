#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        set<long long> window;  // store last indexDiff elements (ordered)

        for (int i = 0; i < nums.size(); i++) {
            // Find the smallest number >= nums[i] - valueDiff
            auto it = window.lower_bound((long long)nums[i] - valueDiff);

            // Check if such number exists and is within valueDiff
            if (it != window.end() && abs(*it - (long long)nums[i]) <= valueDiff) {
                return true;
            }

            // Insert current number into window
            window.insert(nums[i]);

            // Keep window size <= indexDiff
            if (window.size() > indexDiff) {
                window.erase(nums[i - indexDiff]);
            }
        }
        return false;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {1, 5, 9, 1};
    int indexDiff1 = 3;
    int valueDiff1 = 3;
    cout << (sol.containsNearbyAlmostDuplicate(nums1, indexDiff1, valueDiff1) ? "true" : "false") << endl;
    // Expected output: true

    vector<int> nums2 = {1, 2, 3, 1, 2, 3};
    int indexDiff2 = 2;
    int valueDiff2 = 0;
    cout << (sol.containsNearbyAlmostDuplicate(nums2, indexDiff2, valueDiff2) ? "true" : "false") << endl;
    // Expected output: false

    return 0;
}
