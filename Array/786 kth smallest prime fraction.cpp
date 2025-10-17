#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 5};
    vector<pair<double, pair<int, int>>> frac;

    for(int i = 0; i < arr.size(); i++) {
        for(int j = i+1; j < arr.size(); j++) {
            double value = (double)arr[i]/arr[j];
            frac.push_back({value, {arr[i], arr[j]}});
        }
    }

    // Sort fractions by value
    sort(frac.begin(), frac.end());

    // Print all fractions
    for(auto &f : frac) {
        cout << f.second.first << "/" << f.second.second << " = " << f.first << endl;
    }

    return 0;
}
