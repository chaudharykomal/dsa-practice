#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        vector<bool> dp(n + 1, false);
        dp[0] = true; // empty string is always valid

        for (int i = 1; i <= n; i++) {
            for (string word : wordDict) {
                int len = word.size();
                if (i >= len && dp[i - len]) {
                    if (s.substr(i - len, len) == word) {
                        dp[i] = true;
                        break; // no need to check more words
                    }
                }
            }
        }
        return dp[n];
    }
};

int main() {
    Solution sol;
    string s = "catsandog";
    vector<string> dict = {"cats","dog","sand","and","cat"};

    cout << (sol.wordBreak(s, dict) ? "true" : "false") << endl;
    return 0;
}
