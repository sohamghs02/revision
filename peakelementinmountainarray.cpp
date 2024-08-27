#include <bits/stdc++.h>
using namespace std;

void findPeak(int arr[], int n){
    int maxi=INT_MIN;
    for (int i=0; i<n;i++){
        if (arr[i]>maxi){
            maxi = arr[i];
        }
    }
    cout<<maxi;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    findPeak(arr,n);
    return 0;
}