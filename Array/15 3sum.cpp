#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result;
    sort(nums.begin(), nums.end()); // sort array to handle duplicates easily

    for(int i = 0; i < nums.size(); i++) {
        for(int j = i + 1; j < nums.size(); j++) {
            for(int k = j + 1; k < nums.size(); k++) {
                if(nums[i] + nums[j] + nums[k] == 0) {
                    vector<int> triplet = {nums[i], nums[j], nums[k]};
                    sort(triplet.begin(), triplet.end()); // sort the triplet
                    // check if triplet already exists in result
                    if(find(result.begin(), result.end(), triplet) == result.end()) {
                        result.push_back(triplet);
                    }
                }
            }
        }
    }

    // print result
    for(auto t : result) {
        cout << "[";
        for(int i = 0; i < t.size(); i++) {
            cout << t[i];
            if(i < t.size() - 1) cout << ", ";
        }
        cout << "]\n";
    }
    return 0;
}
