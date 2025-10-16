#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int closest = nums[0] + nums[1] + nums[2]; // initial sum of first 3 numbers
    
    for(int i = 0; i < nums.size() - 2; i++) {
        int left = i + 1;
        int right = nums.size() - 1;
        
        while(left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            
            if(abs(sum - target) < abs(closest - target)) {
                closest = sum; // update closest sum
            }
            
            if(sum < target) {
                left++; // need bigger sum
            } else if(sum > target) {
                right--; // need smaller sum
            } else {
                return sum; // perfect match
            }
        }
    }
    return closest;
}

int main() {
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;
    cout << "Closest sum: " << threeSumClosest(nums, target) << endl;
    return 0;
}
