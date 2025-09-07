#include <iostream>
#include <vector>
#include <algorithm> // for sort and next_permutation
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Sort the array to start from lowest lexicographical order
    sort(nums.begin(), nums.end());

    cout << "All permutations are:\n";

    // Generate all permutations iteratively
    do {
        for (int x : nums) {
            cout << x << " ";
        }
        cout << endl;
    } while (next_permutation(nums.begin(), nums.end()));

    return 0;
}
