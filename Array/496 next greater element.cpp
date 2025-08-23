#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;

        for (int i = 0; i < nums1.size(); i++) {
            int nextGreater = -1;  // default value if not found

            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    // search to the right of nums2[j]
                    for (int k = j + 1; k < nums2.size(); k++) {
                        if (nums2[k] > nums2[j]) {
                            nextGreater = nums2[k];
                            break;
                        }
                    }
                    break; // stop after processing nums1[i]
                }
            }

            nums.push_back(nextGreater);
        }

        return nums;
    }
};

int main() {
    Solution s;
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};

    vector<int> ans = s.nextGreaterElement(nums1, nums2);

    cout << "Next Greater Elements: ";
    for (int x : ans) cout << x << " ";
    cout << endl;

    return 0;
}
