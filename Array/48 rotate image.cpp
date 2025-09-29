#include <iostream>
#include <vector>
#include <algorithm> // for reverse
using namespace std;

void printMatrix(vector<vector<int>>& mat) {
    for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[0].size(); j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << "-------------------" << endl;
}

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        cout << "Original Matrix:\n";
        printMatrix(matrix);

        // Step 1: Transpose
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        cout << "After Transpose:\n";
        printMatrix(matrix);

        // Step 2: Reverse each row
        for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
            cout << "After reversing row " << i << ":\n";
            printMatrix(matrix);
        }
    }
};

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    Solution sol;
    sol.rotate(matrix);

    cout << "Final Rotated Matrix:\n";
    printMatrix(matrix);

    return 0;
}
