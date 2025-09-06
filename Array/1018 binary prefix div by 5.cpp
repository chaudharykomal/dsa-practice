#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> result;
        int decimal = 0;

        for (int bit : nums) {
            decimal = (decimal * 2 + bit) % 5; // keep only remainder
            result.push_back(decimal == 0);    // true if divisible by 5
        }

        return result;
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> nums = {0,1,1,1,0,1}; 

    vector<bool> res = sol.prefixesDivBy5(nums);

    cout << "Output: ";
    for (bool b : res) cout << (b ? "true" : "false") << " ";
    cout << endl;

    return 0;
}
