#include <bits/stdc++.h>
using namespace std;

int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int totalGas = 0, tank = 0, start = 0;
    int n = gas.size();

    for (int i = 0; i < n; i++) {
        tank += gas[i] - cost[i];
        totalGas += gas[i] - cost[i];
        
        if (tank < 0) {
            start = i + 1;
            tank = 0;
        }
    }

    return (totalGas >= 0) ? start : -1;
}

int main() {
    vector<int> gas  = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};
    
    cout << canCompleteCircuit(gas, cost) << endl;  // Output: 3
    return 0;
}
