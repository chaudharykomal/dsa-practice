#include <iostream>
#include <climits>   // for INT_MAX and INT_MIN
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
        // Special case: overflow
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        // Normal integer division (fraction is truncated)
        int quotient = dividend / divisor;

        return quotient;
    }
};

int main() {
    Solution sol;

    cout << sol.divide(17, 5) << endl;      // 3
    cout << sol.divide(-17, 5) << endl;     // -3
    cout << sol.divide(17, -5) << endl;     // -3
    cout << sol.divide(-17, -5) << endl;    // 3

    // Overflow case
    cout << sol.divide(INT_MIN, -1) << endl; // 2147483647 (INT_MAX)

    return 0;
}
