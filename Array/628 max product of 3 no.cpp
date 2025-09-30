#include <iostream>
#include <vector>
#include <algorithm> // for max_element

using namespace std;

int maximumProduct(vector<int>& nums) {
    vector<int> products;

    // Only go till size-3 to avoid out of range
    for(int i = 0; i <= nums.size() - 3; i++) {
        int product = nums[i] * nums[i+1] * nums[i+2];
        products.push_back(product);
    }

    // find the maximum product
    return *max_element(products.begin(), products.end());
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    cout << "Maximum product of 3 consecutive numbers = "
         << maximumProduct(nums) << endl;
    return 0;
}
