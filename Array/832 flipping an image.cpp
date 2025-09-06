#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();

        for (int i = 0; i < n; i++) {
            // Flip + Invert in a single pass
            int m = image[i].size();
            for (int j = 0; j < (m + 1) / 2; j++) {
                // swap & invert simultaneously
                int temp = image[i][j] ^ 1;              // invert left
                image[i][j] = image[i][m - 1 - j] ^ 1;   // invert right
                image[i][m - 1 - j] = temp;
            }
        }
        return image;
    }
};

int main() {
    Solution sol;

    // Example input
    vector<vector<int>> image = {
        {1, 1, 0},
        {1, 0, 1},
        {0, 0, 0}
    };

    vector<vector<int>> result = sol.flipAndInvertImage(image);

    // Print result
    cout << "Output:\n";
    for (auto &row : result) {
        for (auto &val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
