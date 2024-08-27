#include <bits/stdc++.h>
using namespace std;

// Function to find the missing element
int findMissing(int arr[], int n) {
    int sumOfNaturalNumbers = (n + 1) * (arr[0] + arr[n - 1]) / 2;
    int sumOfArray = 0;

    // Calculate the sum of the array
    for (int i = 0; i < n; i++) {
        sumOfArray += arr[i];
    }

    // The missing element is the difference between the sum of natural numbers and the sum of the array
    return sumOfNaturalNumbers - sumOfArray;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int missingElement = findMissing(arr, n);
    cout << "The missing element is: " << missingElement << endl;
    return 0;
}