#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> largestDivisibleSubset(vector<int>& nums) {
    if (nums.empty()) return {};

    sort(nums.begin(), nums.end());
    int n = nums.size();
    vector<int> dp(n, 1);
    vector<int> parent(n, -1);

    int maxSize = 1, maxIndex = 0;

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (nums[i] % nums[j] == 0 && dp[j] + 1 > dp[i]) {
                dp[i] = dp[j] + 1;
                parent[i] = j;
            }
        }
        if (dp[i] > maxSize) {
            maxSize = dp[i];
            maxIndex = i;
        }
    }

    // Reconstruct the subset
    vector<int> result;
    while (maxIndex != -1) {
        result.push_back(nums[maxIndex]);
        maxIndex = parent[maxIndex];
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> nums = {1, 2, 4, 8};
    vector<int> result = largestDivisibleSubset(nums);

    cout << "Largest Divisible Subset: ";
    for (int num : result)
        cout << num << " ";
    cout << endl;

    return 0;
}
