#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();

        for (int i = 0; i < size; i++) {
            if (flowerbed[i] == 0) {
                // check left side: if i == 0 → no left neighbor → true
                // else check left neighbor is empty
                bool leftEmpty = (i == 0) || (flowerbed[i - 1] == 0);

                // check right side: if i == last index → no right neighbor → true
                // else check right neighbor is empty
                bool rightEmpty = (i == size - 1) || (flowerbed[i + 1] == 0);

                // if both sides empty → we can plant
                if (leftEmpty && rightEmpty) {
                    flowerbed[i] = 1; // place flower here
                    n--;              // one less flower to plant
                    if (n == 0) return true; // planted all required
                }
            }
        }
        return n <= 0; // true if all flowers planted
    }
};

int main() {
    Solution sol;
    vector<int> flowerbed = {1, 0, 0, 0, 1};
    int n = 1;

    if (sol.canPlaceFlowers(flowerbed, n)) {
        cout << "Yes, we can place " << n << " flowers.\n";
    } else {
        cout << "No, we cannot place " << n << " flowers.\n";
    }

    return 0;
}
