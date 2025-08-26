#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<pair<int,int>> arr; // {score, original_index}
        
        // Step 1: Store score with original index
        for(int i = 0; i < n; i++) {
            arr.push_back({score[i], i});
        }

        // Step 2: Sort in descending order by score
        sort(arr.rbegin(), arr.rend());

        // Step 3: Assign medals/ranks
        vector<string> result(n);
        for(int i = 0; i < n; i++) {
            if(i == 0) result[arr[i].second] = "Gold Medal";
            else if(i == 1) result[arr[i].second] = "Silver Medal";
            else if(i == 2) result[arr[i].second] = "Bronze Medal";
            else result[arr[i].second] = to_string(i + 1);
        }

        return result;
    }
};

int main() {
    Solution sol;
    vector<int> score = {10, 3, 8, 9, 4};  // Example input
    vector<string> result = sol.findRelativeRanks(score);

    cout << "Relative Ranks: " << endl;
    for(string s : result) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}
