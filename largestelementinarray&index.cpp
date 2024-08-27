#include <bits/stdc++.h>
using namespace std;

void findMax(int arr[], int n){
    int maxi=INT_MIN;
    int idx = -1;
    for (int i=1; i<n;i++) {
        if (arr[i]>maxi) {
            maxi = arr[i];
            idx=i;
        }
    }
    cout<<maxi;
    cout<<endl;
    cout<<idx;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    findMax(arr,n);
    return 0;
}