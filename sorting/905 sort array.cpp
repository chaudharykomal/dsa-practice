#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> n;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                n.push_back(nums[i]);
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 != 0) {
                n.push_back(nums[i]);
            }
        }
        return n;
    }
};

int main() {
    Solution sol;
    
    // Example input
    vector<int> nums = {3, 1, 2, 4};
    
    // Function call
    vector<int> result = sol.sortArrayByParity(nums);
    
    // Print result
    cout << "Sorted by parity: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}
