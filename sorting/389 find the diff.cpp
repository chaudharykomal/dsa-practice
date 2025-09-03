#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans = 0;  
        for (char c : s) ans ^= c;   // XOR all characters of s
        for (char c : t) ans ^= c;   // XOR all characters of t
        return ans;                  // remaining char is the answer
    }
};

int main() {
    Solution sol;

    string s = "abc";
    string t = "abdc";   // t has an extra 'd'

    char result = sol.findTheDifference(s, t);

    cout << "The extra character is: " << result << endl;

    return 0;
}
