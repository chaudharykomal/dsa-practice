#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> numberOfPairs(vector<int>& nums) {
    unordered_map<int, int> freq;

    // Step 1: Count frequency of each number
    for (int num : nums) {
        freq[num]++;
    }

    int pairs = 0;
    int leftovers = 0;

    // Step 2: Calculate pairs and leftovers
    for (auto &p : freq) {
        pairs += p.second / 2;       // number of pairs for this number
        leftovers += p.second % 2;   // leftover for this number
    }

    return {pairs, leftovers};
}

int main() {
    vector<int> nums = {1, 3, 2, 1, 3, 2, 2};
    vector<int> ans = numberOfPairs(nums);

    cout << "Pairs = " << ans[0] << ", Leftovers = " << ans[1] << endl;
}
