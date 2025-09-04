#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            // Opening brackets → push to stack
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            // Closing brackets → check match
            else {
                if (st.empty()) return false; // no opening for closing
                char top = st.top();
                st.pop();
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false; // mismatch found
                }
            }
        }
        // At the end stack must be empty for valid string
        return st.empty();
    }
};

int main() {
    Solution obj;

    string s;
    cout << "Enter a string of brackets: ";
    cin >> s;

    if (obj.isValid(s)) {
        cout << "Valid Brackets ✅" << endl;
    } else {
        cout << "Invalid Brackets ❌" << endl;
    }

    return 0;
}
