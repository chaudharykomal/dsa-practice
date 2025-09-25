#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> window;  // store last k elements

        for (int i = 0; i < nums.size(); i++) {
            // Check if current number already in window
            if (window.count(nums[i])) {
                return true;
            }

            // Add current number to window
            window.insert(nums[i]);

            // Keep window size <= k
            if (window.size() > k) {
                window.erase(nums[i - k]);
            }
        }
        return false;
    }
};

int main() {
    Solution sol;

    // Example test cases
    vector<int> nums1 = {1, 2, 3, 1};
    int k1 = 3;
    cout << (sol.containsNearbyDuplicate(nums1, k1) ? "true" : "false") << endl;
    // Expected output: true

    vector<int> nums2 = {1, 0, 1, 1};
    int k2 = 1;
    cout << (sol.containsNearbyDuplicate(nums2, k2) ? "true" : "false") << endl;
    // Expected output: true

    vector<int> nums3 = {1, 2, 3, 1, 2, 3};
    int k3 = 2;
    cout << (sol.containsNearbyDuplicate(nums3, k3) ? "true" : "false") << endl;
    // Expected output: false

    return 0;
}
