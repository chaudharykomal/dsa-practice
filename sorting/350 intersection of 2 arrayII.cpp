#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> n3;
        for(int i = 0; i < nums1.size(); i++) {
            for(int j = 0; j < nums2.size(); j++) {
                if(nums1[i] == nums2[j]) {
                    n3.push_back(nums1[i]);
                    nums2.erase(nums2.begin() + j);
                    break;
                }
            }
        }
        return n3;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1,2,2,1};
    vector<int> nums2 = {2,2};
    
    vector<int> result = sol.intersect(nums1, nums2);
    
    cout << "Intersection: ";
    for(int x : result) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}
