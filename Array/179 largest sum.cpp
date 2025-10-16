#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        // Convert integers to strings
        vector<string> strNums;
        for (int num : nums) {
            strNums.push_back(to_string(num));
        }

        // Custom sort: a+b > b+a means a should come before b
        sort(strNums.begin(), strNums.end(), [](const string &a, const string &b) {
            return a + b > b + a;
        });

        // Edge case: if the largest number is "0", return "0"
        if (strNums[0] == "0") return "0";

        // Concatenate all strings
        string result = "";
        for (string s : strNums) {
            result += s;
        }
        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 30, 34, 5, 9};
    cout << "Largest Number: " << sol.largestNumber(nums) << endl;
    return 0;
}
