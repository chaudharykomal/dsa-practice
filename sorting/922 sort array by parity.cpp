#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);  // result array of same size

        int evenIndex = 0, oddIndex = 1;

        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0) {
                ans[evenIndex] = nums[i];
                evenIndex += 2;
            } else {
                ans[oddIndex] = nums[i];
                oddIndex += 2;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> nums = {4, 2, 5, 7};

    // Function call
    vector<int> result = sol.sortArrayByParityII(nums);

    // Print output
    cout << "Result: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
