#include <bits/stdc++.h>
using namespace std;

int kthLargest(int arr[], int n, int k){
    for(int i=0; i<k; i++){
        int max_index = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j]>arr[max_index]){
                max_index = j;
            }
        }
        swap(arr[i], arr[max_index]);
    }
    return arr[k-1];
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cin>>k;
    cout << kthLargest(arr, n, k) << endl;
    return 0;
}