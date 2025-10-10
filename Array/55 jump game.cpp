#include <bits/stdc++.h>
using namespace std;

bool canJump(vector<int>& nums) {
    int maxReach = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        cout << "Index: " << i << ", maxReach: " << maxReach << ", nums[i]: " << nums[i] << endl;
        
        if (i > maxReach) {
            cout << "Stuck at index " << i << ", cannot move further!" << endl;
            return false;
        }
        
        maxReach = max(maxReach, i + nums[i]);
    }

    return true;
}

int main() {
    vector<int> nums = {3, 2, 1, 0, 4};
    cout << (canJump(nums) ? "true" : "false") << endl;
    return 0;
}
