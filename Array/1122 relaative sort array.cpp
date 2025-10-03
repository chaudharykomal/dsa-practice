#include <bits/stdc++.h>
using namespace std;

vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    // Create a map to store the order of elements in arr2
    unordered_map<int, int> order;
    for (int i = 0; i < arr2.size(); i++) {
        order[arr2[i]] = i;
    }

    // Sort arr1 using a custom comparator
    sort(arr1.begin(), arr1.end(), [&](int a, int b) {
        // If both numbers are in arr2, sort according to arr2 order
        if (order.count(a) && order.count(b)) return order[a] < order[b];
        // If only a is in arr2, it comes first
        if (order.count(a)) return true;
        // If only b is in arr2, it comes first
        if (order.count(b)) return false;
        // If neither are in arr2, sort ascending
        return a < b;
    });

    return arr1;
}

int main() {
    vector<int> arr1 = {2,3,1,3,2,4,6,7,9,2,19};
    vector<int> arr2 = {2,1,4,3,9,6};

    vector<int> result = relativeSortArray(arr1, arr2);

    for(int num : result) cout << num << " ";
    cout << endl;

    return 0;
}
