#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums) {
    int count = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        // Compare current with next (circular using %)
        if (nums[i] > nums[(i + 1) % n]) {
            count++;
        }
        if (count > 1) return false; // more than 1 break → not valid
    }

    return true;
}

int main() {
    vector<int> nums = {3, 4, 5, 1, 2};
    cout << (check(nums) ? "true" : "false");
}
