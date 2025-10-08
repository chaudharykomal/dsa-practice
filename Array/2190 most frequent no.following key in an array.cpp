#include <bits/stdc++.h>
using namespace std;

int mostFrequent(vector<int>& nums, int key) {
    unordered_map<int, int> freq;  // to store counts of targets

    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i] == key) {
            freq[nums[i + 1]]++;  // increase count for the number after key
        }
    }

    int ans = -1, maxCount = 0;
    for (auto &p : freq) {
        if (p.second > maxCount) {
            maxCount = p.second;
            ans = p.first;
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {2, 2, 2, 2, 3};
    int key = 2;
    cout << "Most frequent target after key: " << mostFrequent(nums, key) << endl;
    return 0;
}
