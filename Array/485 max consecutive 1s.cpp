#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;      // current streak of 1s
        int maxCount = 0;   // longest streak found
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count++;
                maxCount = max(maxCount, count);
            } else {
                count = 0; // reset when 0 appears
            }
        }
        return maxCount;
    }
};

int main() {
    Solution s;
    
    // Example input
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    
    int result = s.findMaxConsecutiveOnes(nums);
    cout << "Maximum consecutive 1s = " << result << endl;
    
    return 0;
}
