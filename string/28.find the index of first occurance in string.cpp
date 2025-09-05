#include <bits/stdc++.h>
using namespace std;

// Function to find the first occurrence of needle in haystack
int strStr(string haystack, string needle) {
    int n = haystack.size();
    int m = needle.size();

    // loop over haystack
    for (int i = 0; i <= n - m; i++) {
        if (haystack.substr(i, m) == needle) {
            return i; // found starting index
        }
    }
    return -1; // not found
}

int main() {
    string haystack, needle;

    cout << "Enter haystack string: ";
    cin >> haystack;

    cout << "Enter needle string: ";
    cin >> needle;

    int result = strStr(haystack, needle);

    if (result != -1)
        cout << "Needle found at index: " << result << endl;
    else
        cout << "Needle not found" << endl;

    return 0;
}
