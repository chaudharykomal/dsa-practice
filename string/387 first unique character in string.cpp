#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq;

        // Count frequency of each character
        for (char c : s) {
            freq[c]++;
        }

        // Find first index where frequency == 1
        for (int i = 0; i < s.size(); i++) {
            if (freq[s[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Solution obj;
    string s;

    cout << "Enter a string: ";
    cin >> s;

    int result = obj.firstUniqChar(s);

    if (result == -1) {
        cout << "No unique character found ❌" << endl;
    } else {
        cout << "First unique character is '" 
             << s[result] << "' at index " << result << " ✅" << endl;
    }

    return 0;
}
