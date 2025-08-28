#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> sqrArr;

        // Step 1: Square each number
        for (int i = 0; i < nums.size(); i++) {
            int sqr = nums[i] * nums[i];
            sqrArr.push_back(sqr);
        }

        // Step 2: Sort the squared numbers
        sort(sqrArr.begin(), sqrArr.end());

        return sqrArr;
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> nums = {-7, -3, 2, 3, 11};

    // Function call
    vector<int> result = sol.sortedSquares(nums);

    // Print output
    cout << "Sorted Squares: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
