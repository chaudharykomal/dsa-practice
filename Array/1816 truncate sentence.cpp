#include <bits/stdc++.h>
using namespace std;

string truncateSentence(string s, int k) {
    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') count++;
        if (count == k) return s.substr(0, i); // truncate at k-th space
    }
    return s; // if sentence has <= k words, return whole sentence
}

int main() {
    string s = "Hello how are you Contestant";
    int k = 4;
    cout << truncateSentence(s, k) << endl; // Output: "Hello how are you"
}
