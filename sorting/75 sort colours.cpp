#include <bits/stdc++.h>   // includes all standard headers
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // built-in sort
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    cout << "Before sorting: ";
    for (int n : nums) cout << n << " ";
    cout << endl;

    // Call the function
    sol.sortColors(nums);

    cout << "After sorting: ";
    for (int n : nums) cout << n << " ";
    cout << endl;

    return 0;
}
