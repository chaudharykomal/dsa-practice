#include <bits/stdc++.h>
using namespace std;

int sumOfUnique(vector<int>& nums) {
    int sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        bool isUnique = true;

        // check if nums[i] appears again
        for (int j = 0; j < nums.size(); j++) {
            if (i != j && nums[i] == nums[j]) {
                isUnique = false;
                break;
            }
        }

        if (isUnique)
            sum += nums[i];
    }

    return sum;
}

int main() {
    vector<int> nums = {1, 2, 3, 2};
    cout << sumOfUnique(nums);  // Output: 4
}
