#include <iostream>
#include <vector>
#include <algorithm> // for sort
using namespace std;

class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        vector<double> medians;
        int n = nums.size();
        
        // edge cases
        if (n == 0 || k <= 0 || k > n) return medians;

        for (int i = 0; i <= n - k; i++) {
            vector<int> window(nums.begin() + i, nums.begin() + i + k); // get window
            sort(window.begin(), window.end()); // sort window

            double median;
            if (k % 2 == 1) {
                median = window[k / 2]; // odd window size
            } else {
                median = (window[k/2 - 1] + window[k/2]) / 2.0; // even window size
            }

            medians.push_back(median);
        }

        return medians;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    vector<double> result = sol.medianSlidingWindow(nums, k);

    cout << "Sliding window medians: ";
    for (double m : result) {
        cout << m << " ";
    }
    cout << endl;

    return 0;
}
