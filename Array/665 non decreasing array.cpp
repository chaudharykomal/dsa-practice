#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int count = 0;

        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] > nums[i+1]){
                count++;
                if(count > 1) return false;

                // Decide which number to modify
                if(i == 0 || nums[i-1] <= nums[i+1]){
                    nums[i] = nums[i+1];  // modify current number
                } else {
                    nums[i+1] = nums[i];  // modify next number
                }
            }
        }

        return true;
    }
};

int main() {
    Solution sol;
    int n;
    
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    bool result = sol.checkPossibility(nums);

    if(result){
        cout << "True: Array can be made non-decreasing with at most 1 modification." << endl;
    } else {
        cout << "False: Array cannot be made non-decreasing with at most 1 modification." << endl;
    }

    return 0;
}
