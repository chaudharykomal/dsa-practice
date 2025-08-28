#include <iostream>
#include <vector>
#include <cmath> // for log10 and floor
using namespace std;

int findNumbers(vector<int>& nums) {
    int evencount = 0;

    for (int i = 0; i < nums.size(); i++) {
        // Handle 0 separately, because log10(0) is undefined
        int digit;
        if (nums[i] == 0) {
            digit = 1;
        } else {
            digit = floor(log10(nums[i])) + 1;
        }

        if (digit % 2 == 0) { // check even digit count
            evencount++;
        }
    }

    return evencount;
}

int main() {
    vector<int> nums = {12, 345, 2, 6, 7896};

    int result = findNumbers(nums);

    cout << result << " numbers have even digits" << endl;

    return 0;
}
