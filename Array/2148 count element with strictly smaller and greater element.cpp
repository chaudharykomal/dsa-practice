#include <bits/stdc++.h>
using namespace std;

int countElements(vector<int>& nums) {
    int mn = *min_element(nums.begin(), nums.end());
    int mx = *max_element(nums.begin(), nums.end());
    int count = 0;

    for (int n : nums) {
        if (n > mn && n < mx)
            count++;
    }
    return count;
}

int main() {
    vector<int> nums = {11, 7, 2, 15};
    cout << "Count of elements with smaller and greater values: " 
         << countElements(nums) << endl;

    return 0;
}
