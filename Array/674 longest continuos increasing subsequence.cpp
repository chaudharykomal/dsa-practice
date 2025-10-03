#include <bits/stdc++.h>
using namespace std;

int findLengthOfLCIS(vector<int>& nums) {
    if(nums.empty()) return 0;

    int maxLen = 1;      // at least one element
    int currentLen = 1;

    for(int i = 1; i < nums.size(); i++){
        if(nums[i] > nums[i-1]){
            currentLen++;
        } else {
            currentLen = 1;
        }
        maxLen = max(maxLen, currentLen);
    }

    return maxLen;
}

int main() {
    vector<vector<int>> testCases = {
        {1,3,5,4,7},
        {2,2,2,2,2},
        {1,3,2,4,6,5,8,9},
        {1},
        {}
    };

    for(int i = 0; i < testCases.size(); i++){
        cout << "Test case " << i+1 << ": ";
        vector<int> nums = testCases[i];
        cout << "Length of LCIS = " << findLengthOfLCIS(nums) << endl;
    }

    return 0;
}
