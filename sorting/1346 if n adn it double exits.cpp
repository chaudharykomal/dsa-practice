#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for (int i = 0; i < arr.size(); i++) {
            for (int j = 0; j < arr.size(); j++) {
                if (i != j && arr[i] == 2 * arr[j]) {
                    return true;   // found such pair
                }
            }
        }
        return false;  // no pair found
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> arr = {10, 2, 5, 3};

    // Function call
    bool result = sol.checkIfExist(arr);

    // Print output
    if (result) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
