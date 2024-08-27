#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& num1, vector<int>& num2) {
    int i = 0, j = 0;
    vector<int> ans;
    while (i < num1.size() && j < num2.size()){
        if (num1[i] < num2[j]){
            i++;
        }
        else if (num2[j] < num1[i]){
            j++;
        }
        else{
            if (ans.empty() || ans.back() != num1[i]) {
                ans.push_back(num1[i]);
            }
            i++;
            j++;
        }
    }
    return ans;
}

int main() {
    int n1;
    cin >> n1;
    vector<int> arr1(n1);
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    int n2;
    cin >> n2;
    vector<int> arr2(n2);
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    vector<int> result = intersection(arr1, arr2);
    cout << "Intersection: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}