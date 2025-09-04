#include <bits/stdc++.h>
using namespace std;

// Function to reverse a vector of characters
void reverseString(vector<char>& s) {
    reverse(s.begin(), s.end());  // STL function to reverse in place
}

int main() {
    // Example input
    vector<char> s = {'h','e','l','l','o'};

    cout << "Original string: ";
    for (char c : s) cout << c;
    cout << endl;

    // Reverse
    reverseString(s);

    cout << "Reversed string: ";
    for (char c : s) cout << c;
    cout << endl;

    return 0;
}
