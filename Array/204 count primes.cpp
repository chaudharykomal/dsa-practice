#include <iostream>
#include <vector>
using namespace std;

int countPrimes(int n) {
    if (n <= 2) return 0;

    vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false;

    // only go till sqrt(n), i.e. i*i < n
    for (int i = 2; i * i < n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < n; j += i) {
                isPrime[j] = false; // mark multiples of i
            }
        }
    }

    int count = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime[i]) count++;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Number of primes less than " << n 
         << " = " << countPrimes(n) << endl;

    return 0;
}
