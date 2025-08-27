#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> romanvalues = {
            {'I',1},{'V',5},{'X',10},{'L',50},
            {'C',100},{'D',500},{'M',1000}
        };

        int result = 0;
        for (int i = 0; i < s.size(); i++) {
            int curr = romanvalues[s[i]];
            int next;

            if (i + 1 < s.size()) {        // ✅ check if next exists
                next = romanvalues[s[i+1]];
            } else {
                next = 0;                  // ✅ no next char
            }

            if (curr < next)
                result -= curr;            // subtract current
            else
                result += curr;            // add current
        }
        return result;
    }
};

int main() {
    Solution sol;
    
    // test cases
    cout << sol.romanToInt("III") << endl;     // 3
    cout << sol.romanToInt("LVIII") << endl;   // 58
    cout << sol.romanToInt("MCMXCIV") << endl; // 1994
    cout << sol.romanToInt("IX") << endl;      // 9

    return 0;
}
