#include <iostream>
#include <vector>
#include <algorithm>

// Class containing the merge function
class Solution {
public:
    std::vector<std::vector<int>> merge(std::vector<std::vector<int>>& intervals) {
        if (intervals.empty()) {
            return {};
        }

        std::sort(intervals.begin(), intervals.end());

        std::vector<std::vector<int>> merged;
        merged.push_back(intervals[0]);

        for (size_t i = 1; i < intervals.size(); ++i) {
            if (intervals[i][0] <= merged.back()[1]) {
                merged.back()[1] = std::max(merged.back()[1], intervals[i][1]);
            } else {
                merged.push_back(intervals[i]);
            }
        }
        return merged;
    }
};

// Main function to test the code
int main() {
    Solution sol;
    
    // Example 1
    std::vector<std::vector<int>> intervals1 = {{1, 3}, {8, 10}, {2, 6}, {15, 18}};
    std::cout << "Original intervals: ";
    for (const auto& interval : intervals1) {
        std::cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    std::cout << std::endl;

    std::vector<std::vector<int>> result1 = sol.merge(intervals1);
    std::cout << "Merged intervals: ";
    for (const auto& interval : result1) {
        std::cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    std::cout << std::endl << std::endl;

    // Example 2
    std::vector<std::vector<int>> intervals2 = {{1, 4}, {4, 5}};
    std::cout << "Original intervals: ";
    for (const auto& interval : intervals2) {
        std::cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    std::cout << std::endl;

    std::vector<std::vector<int>> result2 = sol.merge(intervals2);
    std::cout << "Merged intervals: ";
    for (const auto& interval : result2) {
        std::cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    std::cout << std::endl;

    return 0;
}