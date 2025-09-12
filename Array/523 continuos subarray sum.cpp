#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool checkSubarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> mp;
    mp[0] = -1;  // handle sum from start
    int sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        int rem = k != 0 ? sum % k : sum;

        if (mp.find(rem) != mp.end()) {
            if (i - mp[rem] > 1)  // size at least 2
                return true;
        } else {
            mp[rem] = i;  // store first occurrence
        }
    }

    return false;
}

int main() {
    vector<int> nums = {23, 2, 4, 6, 7};
    int k = 6;

    if (checkSubarraySum(nums, k))
        cout << "Yes, subarray exists." << endl;
    else
        cout << "No subarray exists." << endl;

    return 0;
}
