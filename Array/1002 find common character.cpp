#include <bits/stdc++.h>
using namespace std;

vector<string> commonChars(vector<string>& words) {
    multiset<char> common(words[0].begin(), words[0].end());
    for (int i = 1; i < words.size(); i++) {
        multiset<char> cur(words[i].begin(), words[i].end()), temp;
        for (char c : common) if (cur.count(c)) { temp.insert(c); cur.erase(cur.find(c)); }
        common = temp;
    }
    return vector<string>(common.begin(), common.end());
}
