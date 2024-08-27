#include<bits/stdc++.h>
using namespace std;
int second(int *arr, int n){
    int maxi = INT_MIN;
    int smax;
    int c = 0;
    for(int i=0 ; i<n ; i++){
        if(arr[i]>maxi){
            smax = maxi;
            maxi = arr[i];
        }
        else if(arr[i]>smax && arr[i]!=maxi){
            smax = arr[i];
        }
    }
    for(int i=0 ; i<n ; i++){
        if(arr[i]==smax){
            c++;
        }
    }
    return c;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    cout<<second(arr, n);
}