#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // ✅ One-line sorting
        return nums;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {5, 2, 3, 1};
    vector<int> sorted = sol.sortArray(nums);

    cout << "Sorted Array: ";
    for (int num : sorted) cout << num << " ";
    cout << endl;

    return 0;
}
