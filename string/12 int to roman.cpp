#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to convert integer to Roman
string intToRoman(int num) {
    // ✅ Step 1: Mapping of values and symbols
    vector<pair<int, string>> valueSymbol = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };

    string result = ""; // ✅ Step 2: Result holder

    // ✅ Step 3: Loop over each value-symbol pair
    for (auto &pair : valueSymbol) {
        // while num is greater or equal to the value
        while (num >= pair.first) {
            result += pair.second; // add the symbol
            num -= pair.first;     // reduce the number
        }
    }

    return result; // ✅ Step 4: Final answer
}

int main() {
    int num = 58; // Example input
    cout << "Number: " << num << endl;
    cout << "Roman numeral: " << intToRoman(num) << endl;

    /*
        🔹 Dry Run for num = 58
        valueSymbol = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1}

        Step 1: num = 58
        - Skip until we reach 50 (since 58 < 100)
        - 58 >= 50 → result = "L", num = 58 - 50 = 8

        Step 2: Now num = 8
        - Skip 40, 10, 9 (too big)
        - 8 >= 5 → result = "LV", num = 8 - 5 = 3

        Step 3: Now num = 3
        - Skip 4 (too big)
        - 3 >= 1 → result = "LVI", num = 2
        - 2 >= 1 → result = "LVII", num = 1
        - 1 >= 1 → result = "LVIII", num = 0

        ✅ Final Answer: "LVIII"
    */
    return 0;
}
