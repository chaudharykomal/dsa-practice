#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        int n = s.size(), k = p.size();

        if (n < k) return result; // no possible window

        // frequency arrays for 'a' to 'z'
        vector<int> pCount(26, 0), sCount(26, 0);

        // build pCount
        for (char c : p) {
            pCount[c - 'a']++;
        }

        // first window in s
        for (int i = 0; i < k; i++) {
            sCount[s[i] - 'a']++;
        }

        // check first window
        if (sCount == pCount) result.push_back(0);

        // slide window across s
        for (int i = k; i < n; i++) {
            // add new char (entering window)
            sCount[s[i] - 'a']++;

            // remove old char (leaving window)
            sCount[s[i - k] - 'a']--;

            // check if window matches
            if (sCount == pCount) {
                result.push_back(i - k + 1);
            }
        }

        return result;
    }
};

int main() {
    Solution sol;
    string s = "cbaebabacd", p = "abc";

    vector<int> ans = sol.findAnagrams(s, p);

    cout << "Anagram indices: ";
    for (int idx : ans) cout << idx << " ";
    cout << endl;

    return 0;
}
