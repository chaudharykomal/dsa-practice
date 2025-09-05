#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "HeLLo WoRLd";

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    cout << s << endl; // Output: hello world
    return 0;
}
