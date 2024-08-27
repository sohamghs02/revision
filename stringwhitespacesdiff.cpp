#include<bits/stdc++.h>
using namespace std;

string space(const string& str1, const string& str2) {
    int c1 = 0, c2 = 0;
    for (char c : str1) {
        if (c == ' ') {
            c1++;
        }
    }
    for (char c : str2) {
        if (c == ' ') {
            c2++;
        }
    }
    int diff = abs(c1 - c2);
    if (diff % 2 == 0) {
        return "Even:" + to_string(diff);
    } else {
        return "Odd:" + to_string(diff);
    }
}

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    cout << space(s1, s2) << endl;
    return 0;
}