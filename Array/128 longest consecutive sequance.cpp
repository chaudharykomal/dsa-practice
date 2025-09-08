#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;

        sort(nums.begin(), nums.end());
        int longest = 1;
        int count = 1;

        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[i-1] + 1) {
                count++;
            }
            else if(nums[i] != nums[i-1]) {
                count = 1;
            }
            longest = max(longest, count);
        }
        return longest;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {100, 4, 200, 1, 3, 2};
    cout << "Longest Consecutive Sequence Length = " 
         << sol.longestConsecutive(nums) << endl;

    vector<int> nums2 = {1, 2, 2, 3};
    cout << "Longest Consecutive Sequence Length = " 
         << sol.longestConsecutive(nums2) << endl;

    return 0;
}
