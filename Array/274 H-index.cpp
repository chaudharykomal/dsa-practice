#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int hIndex(vector<int>& citations) {
    sort(citations.begin(), citations.end());  // Step 1: Sort citations in ascending order
    
    int n = citations.size();
    
    // Step 2: Loop through sorted citations
    for (int i = 0; i < n; i++) {
        int papers = n - i; // Number of papers with at least citations[i] citations
        if (citations[i] >= papers) {
            return papers;   // Maximum h found
        }
    }
    
    return 0; // No valid h found
}

int main() {
    vector<int> citations = {3, 0, 6, 1, 5};
    cout << "H-index = " << hIndex(citations) << endl;
    return 0;
}
