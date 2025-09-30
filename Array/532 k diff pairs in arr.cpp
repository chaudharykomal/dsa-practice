#include <iostream>
#include <vector>
#include <set>
#include <cmath>    // for abs()

using namespace std;

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int count = 0;
        set<pair<int,int>> seen;  // store unique pairs

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (abs(nums[i] - nums[j]) == k) {
                    int a = min(nums[i], nums[j]);
                    int b = max(nums[i], nums[j]);

                    // only insert if not already present
                    if (seen.find({a, b}) == seen.end()) {
                        seen.insert({a, b});
                        count++;
                    }
                }
            }
        }
        return count;
    }
};

int main() {
    Solution s;

    vector<int> nums = {1, 3, 3, 5};  // example input
    int k = 2;

    int result = s.findPairs(nums, k);

    cout << "Number of unique k-diff pairs: " << result << endl;

    return 0;
}
