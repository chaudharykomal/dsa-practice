#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] < nums[mid + 1]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return left; // or right, both are same here
}

int main() {
    vector<int> nums = {7, 3, 2, 8, 4, 2};
    int index = findPeakElement(nums);
    cout << "Peak element index: " << index << ", value: " << nums[index] << endl;
    return 0;
}
