#include<bits/stdc++.h>
using namespace std;

void count(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                count++;
                cout<<arr[i]<<" ";
            }
        }
    }
    cout<<endl;
    cout<<count;
}

int main(){
    int arr[100], n;
    cin>>n;    
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    count(arr,n);   
    return 0;
}