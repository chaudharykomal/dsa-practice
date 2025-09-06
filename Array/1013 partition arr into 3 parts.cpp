#include <bits/stdc++.h>
using namespace std;

class SolutionTarget {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int total = accumulate(arr.begin(), arr.end(), 0);

        if (total % 3 != 0) return false; // not divisible
        int target = total / 3;

        int sum = 0, count = 0;
        for (int num : arr) {
            sum += num;
            if (sum == target) {
                count++;
                sum = 0; // reset for next part
            }
        }
        return count >= 3;
    }
};
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int total = accumulate(arr.begin(), arr.end(), 0);

        // If total sum not divisible by 3 → impossible
        if (total % 3 != 0) return false;

        int target = total / 3;
        int sum = 0, count = 0;

        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];

            if (sum == target) {
                count++;
                sum = 0;

                // If we already found 2 partitions,
                // and we are not at the end, the rest must be the 3rd
                if (count == 2 && i < arr.size() - 1) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main() {
    Solution sol;

    // Example 1
    vector<int> arr1 = {0,2,1,-6,6,-7,9,1,2,0,1};
    cout << (sol.canThreePartsEqualSum(arr1) ? "true" : "false") << endl;

    // Example 2 (all zeros)
    vector<int> arr2 = {0,0,0,0};
    cout << (sol.canThreePartsEqualSum(arr2) ? "true" : "false") << endl;

    return 0;
}
