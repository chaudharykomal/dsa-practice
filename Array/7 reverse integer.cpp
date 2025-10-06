#include <iostream>
#include <climits>   // for INT_MAX and INT_MIN
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long long reversed = 0;   // use long long to avoid overflow

        while (x != 0) {
            int digit = x % 10;           // get last digit
            reversed = reversed * 10 + digit;  // add digit to reversed number
            x = x / 10;                   // remove last digit
        }

        // check for 32-bit overflow
        if (reversed > INT_MAX || reversed < INT_MIN) {
            return 0;
        }

        return (int)reversed;   // safely convert long long → int
    }
};

int main() {
    Solution sol;
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    int result = sol.reverse(num);
    cout << "Reversed number: " << result << endl;

    return 0;
}
