#include<bits/stdc++.h>
using namespace std;

int sumdiff(int arr[], int n){
    int sum=0,xr=0,diff=0;
    for(int i=0;i<n;i++){
        if(i%2!=0){
            sum=sum+arr[i];
        }
        else if(i%2==0){
            xr=xr^arr[i];
        }
    }
    diff=sum-xr;
    return diff;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sumdiff(arr,n)<<endl;
    return 0;
}