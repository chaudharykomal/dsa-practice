#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i = 0;
        int n = bits.size();
        while (i < n - 1) { // stop before last element
            if(bits[i] == 1) i += 2; // 2-bit character
            else i += 1;             // 1-bit character
        }
        return i == n - 1; // if last index reached exactly, last 0 is 1-bit
    }
};

int main() {
    Solution sol;

    vector<vector<int>> testCases = {
        {1, 0, 0},
        {1, 1, 1, 0},
        {0},
        {1, 0, 1, 0, 0},
        {1, 1, 0, 0}
    };

    for(int i = 0; i < testCases.size(); i++){
        cout << "Test case " << i+1 << ": ";
        vector<int> bits = testCases[i];
        bool result = sol.isOneBitCharacter(bits);
        cout << (result ? "Last 0 is 1-bit" : "Last 0 is part of 2-bit") << endl;
    }

    return 0;
}
