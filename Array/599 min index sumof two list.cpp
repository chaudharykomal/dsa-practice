#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int n1 = list1.size();
        int n2 = list2.size();
        vector<string> result;
        int minSum = INT_MAX; // store the minimum index sum found

        // Nested loops to compare each string
        for(int i = 0; i < n1; i++) {
            for(int j = 0; j < n2; j++) {
                if(list1[i] == list2[j]) { // match found
                    int indexSum = i + j;

                    if(indexSum < minSum) {
                        // Found smaller sum, reset result
                        result.clear();
                        result.push_back(list1[i]);
                        minSum = indexSum;
                    } else if(indexSum == minSum) {
                        // Same minimum sum, add to result
                        result.push_back(list1[i]);
                    }
                }
            }
        }

        return result;
    }
};

int main() {
    Solution sol;
    vector<string> list1 = {"Shogun","Tapioca Express","Burger King","KFC"};
    vector<string> list2 = {"KFC","Shogun","Burger King"};

    vector<string> res = sol.findRestaurant(list1, list2);
    for(string s : res) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}
