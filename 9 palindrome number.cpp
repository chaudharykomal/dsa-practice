#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    if (n < 0) return false;   // negative numbers are not palindrome

    int original = n;
    long long reversed = 0;    // use long long to avoid overflow

    while (n != 0) {
        int digit = n % 10;            // extract last digit
        reversed = reversed * 10 + digit; // build reversed number
        n /= 10;                       // remove last digit
    }

    return original == reversed;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPalindrome(n))
        cout << n << " is a palindrome number" << endl;
    else
        cout << n << " is not a palindrome number" << endl;

    return 0;
}
