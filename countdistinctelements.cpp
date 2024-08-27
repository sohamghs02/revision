#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[100], n, i, j, count = 0;
    cin>>n;    
    for(i = 0; i < n; i++) {
        cin>>arr[i];
    }
    for(i = 0; i < n; i++) {
        int isDistinct = 1;
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                isDistinct = 0;
                break;
            }
        }
        if(isDistinct==1) {
            count++;
            sort(arr,arr+n);
            cout<<arr[i]<<" ";
        }        
    }
    cout<<endl;
    cout<<count;    
    return 0;
}