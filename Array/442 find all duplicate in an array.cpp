#include <iostream>
#include <vector>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
    vector<int> result;
    int n = nums.size();
    
    // mark elements by index
    for(int i = 0; i < n; i++) {
        int index = abs(nums[i]) - 1;  // use absolute in case nums[index] was negative
        if(nums[index] < 0) {
            result.push_back(index + 1);  // duplicate found
        } else {
            nums[index] = -nums[index];   // mark as seen
        }
    }
    
    return result;
}

int main() {
    vector<int> nums = {4,3,2,7,8,2,3,1};
    vector<int> res = findDuplicates(nums);
    
    for(int num : res) cout << num << " ";
    return 0;
}
