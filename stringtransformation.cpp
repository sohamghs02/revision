#include <bits/stdc++.h>
using namespace std;

int minCost(string S1, string S2) {
    int cost = 0;
    int m = S1.length();
    int n = S2.length();
    for (int i = 0; i < n; ++i) {
        int flag = 0;
        for (int j = 0; j < m; ++j) {
            if (S2[i] == S1[j]) {
                flag = 1;
                S1[j] = '\0';
                break;
            }
        }
        if (flag==0) {
            cost++;
        }
    }

    return cost;
}

int main() {
    string S1 = "ABD";
    string S2 = "AABCCAD";
    
    int result = minCost(S1, S2);
    cout << "Minimum Cost: " << result << endl; // Output should be 3
    
    return 0;
}