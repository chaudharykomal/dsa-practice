#include <iostream>
#include <sstream>
#include <vector>
#include <map>
using namespace std;

// Function to check if pattern matches the word sequence
bool wordPattern(string pattern, string s) {
    // Step 1: Split sentence s into words
    vector<string> words;
    stringstream ss(s);  // Allows us to split string by spaces
    string word;
    while (ss >> word) {
        words.push_back(word);
    }

    // Step 2: Check if number of words equals pattern length
    if (words.size() != pattern.size()) {
        return false;
    }

    // Step 3: Create two maps for bijection
    map<char, string> charToWord;  // maps pattern char → word
    map<string, char> wordToChar;  // maps word → pattern char

    // Step 4: Loop over each pattern character and corresponding word
    for (int i = 0; i < pattern.size(); i++) {
        char c = pattern[i];
        string w = words[i];

        // If pattern character already has a mapped word
        if (charToWord.count(c)) {
            if (charToWord[c] != w) {
                return false;  // mismatch
            }
        } else {
            charToWord[c] = w;  // assign mapping
        }

        // If word already has a mapped pattern character
        if (wordToChar.count(w)) {
            if (wordToChar[w] != c) {
                return false;  // mismatch
            }
        } else {
            wordToChar[w] = c;  // assign mapping
        }
    }

    // Step 5: If all checks pass, pattern matches
    return true;
}

int main() {
    string pattern = "abba";
    string s = "dog cat cat dog";

    if (wordPattern(pattern, s)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
