#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == 0 && nums[j] != 0) {
                    // Swap nums[i] and nums[j]
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
    }
};

int main() {
    // Example input
    vector<int> nums = {0, 1, 0, 3, 12};

    Solution sol;
    sol.moveZeroes(nums);

    // Print output
    cout << "Output: ";
    for (int n : nums) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
