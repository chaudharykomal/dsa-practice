#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1, last = -1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target){
                if(first == -1) first = i; // first occurrence
                last = i;                  // keep updating last occurrence
            }
        }
        return {first, last}; // return as a vector
    }
};

int main() {
    Solution sol;
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    vector<int> result = sol.searchRange(nums, target);
    cout << "First and Last Position: [" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}
