#include<bits/stdc++.h>
using namespace std;

int Equilibrium(int arr[], int n){
    int r=0,l=0;
    for(int i=0;i<n;i++){
        r=r+arr[i];
    }
    for(int i=0;i<n;i++){
        r=r-arr[i];
        if(r==l){
            return i;
        }
        l=l+arr[i];
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<Equilibrium(arr,n)<<endl;
    return 0;
}