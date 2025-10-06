#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int i = s.size() - 1;

        // Skip trailing spaces
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // Count characters of the last word
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }

        return length;
    }
};

// Example usage
int main() {
    Solution sol;
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int len = sol.lengthOfLastWord(s);
    cout << "Length of the last word: " << len << endl;

    return 0;
}
