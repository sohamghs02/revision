#include<bits/stdc++.h>
using namespace std;

void check(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum = sum + (pow(arr[i],2));
    }
    cout<<sum;
}

int main(){
    int n, arr[100];    
    cin>>n;   
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    check(arr, n);
    return 0;
}