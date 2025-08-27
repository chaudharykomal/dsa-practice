#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> res;
    res.push_back({}); // start with empty subset

    for(int i = 0; i < nums.size(); i++) {           // loop through each element
        int n = res.size();
        for(int j = 0; j < n; j++) {                // loop through existing subsets
            vector<int> temp = res[j];              // copy existing subset
            temp.push_back(nums[i]);                // add current element
            res.push_back(temp);                     // add new subset to result
        }
    }

    // print all subsets
    for(int i = 0; i < res.size(); i++) {
        cout << "{ ";
        for(int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << "}" << endl;
    }
}
