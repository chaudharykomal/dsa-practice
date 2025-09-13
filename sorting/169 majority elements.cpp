#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();

        // Step 1: Sort the array
        sort(nums.begin(), nums.end());

        // Step 2: Count frequency of each number
        int count = 1;
        for (int i = 1; i <= n; i++) {
            if (i < n && nums[i] == nums[i - 1]) {
                count++;
            } else {
                if (count > n / 3) {
                    result.push_back(nums[i - 1]);
                }
                count = 1; // reset count
            }
        }

        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 2, 3, 2, 2, 1, 1};
    vector<int> ans = sol.majorityElement(nums);

    cout << "Majority elements (> n/3): ";
    for (int x : ans) cout << x << " ";
    cout << endl;

    return 0;
}
