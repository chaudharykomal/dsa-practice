#include <iostream>
#include <vector>
#include <algorithm>  // for find()
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> n3;
    for(int i = 0; i < nums1.size(); i++) {
        for(int j = 0; j < nums2.size(); j++) {
            if(nums1[i] == nums2[j]) {
                // check if nums1[i] is not already in n3
                if(find(n3.begin(), n3.end(), nums1[i]) == n3.end()) {
                    n3.push_back(nums1[i]);
                }
            }
        }
    }
    return n3;
}

int main() {
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};

    vector<int> result = intersection(nums1, nums2);

    cout << "Intersection: ";
    for(int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
