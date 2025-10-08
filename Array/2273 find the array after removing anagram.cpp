#include <bits/stdc++.h>
using namespace std;

vector<string> removeAnagrams(vector<string>& words) {
    vector<string> result;

    result.push_back(words[0]);  // first word always stays

    for (int i = 1; i < words.size(); i++) {
        string curr = words[i];
        string prev = result.back();

        string s1 = curr, s2 = prev;
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        if (s1 != s2)  // only keep if not anagram
            result.push_back(curr);
    }

    return result;
}

int main() {
    vector<string> words = {"abba", "baba", "bbaa", "cd", "cd"};
    vector<string> ans = removeAnagrams(words);

    cout << "[ ";
    for (auto w : ans) cout << w << " ";
    cout << "]" << endl;

    return 0;
}
