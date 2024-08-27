#include <bits/stdc++.h>
using namespace std;

vector<int> mergeSortedArrays(int arr1[], int n, int arr2[], int m){
    vector<int> merged;
    int i=0, j=0;
    while(i<n && j<m){
        if (arr1[i]<arr2[j]){
            merged.push_back(arr1[i]);
            i++;
        }
        else{
            merged.push_back(arr2[j]);
            j++;
        }
    }
    while(i<n){
        merged.push_back(arr1[i]);
        i++;
    }
    while(j<m){
        merged.push_back(arr2[j]);
        j++;
    }
    return merged;
}

int main(){
    int arr1[] = {1, 3, 9};
    int arr2[] = {4, 8, 10};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    vector<int> result = mergeSortedArrays(arr1, size1, arr2, size2);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}