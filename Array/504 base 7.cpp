#include <iostream>
#include <string>
using namespace std;

string convertToBase7(int num) {
    if (num == 0) return "0"; // special case

    bool isNegative = false;
    if (num < 0) {
        isNegative = true;
        num = -num; // convert to positive
    }

    string base7 = "";
    while (num > 0) {
        int remainder = num % 7;
        base7 = to_string(remainder) + base7; // prepend digit
        num /= 7;
    }

    if (isNegative) {
        base7 = "-" + base7; // add negative sign
    }

    return base7;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Base 7: " << convertToBase7(num) << endl;

    return 0;
}
