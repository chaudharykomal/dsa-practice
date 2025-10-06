#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    void nextPermutation(std::vector<int>& nums) {
        int n = nums.size();
        int i = n - 2;

        // Step 1: Find the first decreasing element from the end
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }

        // Step 2: If such an element is found
        if (i >= 0) {
            int j = n - 1;
            // Find the element just larger than nums[i]
            while (nums[j] <= nums[i]) {
                j--;
            }
            // Swap elements at i and j
            std::swap(nums[i], nums[j]);
        }

        // Step 3: Reverse the sequence from i+1 to end
        std::reverse(nums.begin() + i + 1, nums.end());
    }
};

int main() {
    Solution sol;
    std::vector<int> nums = {1, 2, 3};
    sol.nextPermutation(nums);

    std::cout << "Next permutation: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
