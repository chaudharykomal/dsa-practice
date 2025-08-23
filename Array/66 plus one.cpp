#include <bits/stdc++.h>  
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        digits[n-1] += 1;

        
        for (int i = n-1; i > 0; i--) {
            if (digits[i] == 10) {
                digits[i] = 0;
                digits[i-1] += 1;
            }
        }

        
        if (digits[0] == 10) {
            digits[0] = 0;
            digits.insert(digits.begin(), 1);
        }

        return digits;
    }
};


int main() {
    Solution sol;
    vector<int> digits = {9, 9, 9};
    vector<int> result = sol.plusOne(digits);

    
    for (int d : result) {
        cout << d << " ";
    }
    cout << endl;

    return 0;
}
