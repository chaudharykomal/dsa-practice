#include <iostream>
#include <cmath>   // for pow()

using namespace std;

double myPow(double x, int n) {
    double p = pow(x, n);
    return p;
}

int main() {
    double x;
    int n;

    cout << "Enter base (x): ";
    cin >> x;

    cout << "Enter exponent (n): ";
    cin >> n;

    double result = myPow(x, n);
    cout << x << " raised to the power " << n << " is: " << result << endl;

    return 0;
}
