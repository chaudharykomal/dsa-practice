#include <iostream>
#include <vector>
using namespace std;

vector<int> singleNumber(vector<int>& nums) {
    vector<int> result;

    for(int i = 0; i < nums.size(); i++){
        int count = 0;
        for(int j = 0; j < nums.size(); j++){
            if(nums[i] == nums[j]){
                count++;
            }
        }
        if(count == 1){
            result.push_back(nums[i]);
        }
    }

    return result;
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2, 5};
    vector<int> res = singleNumber(nums);

    for(int num : res){
        cout << num << " ";
    }
    return 0;
}
