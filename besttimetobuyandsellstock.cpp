#include<bits/stdc++.h>
using namespace std;

int stock(int arr[], int n){
    if(n==0 || n==1){
        return 0;
    }
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i-1]){
            c++;
        }
    }
    return c;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<stock(arr,n)<<endl;
    return 0;
}