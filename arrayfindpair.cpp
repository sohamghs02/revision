#include<bits/stdc++.h>
using namespace std;
void result(int *arr, int n){
    int maxi = INT_MIN;
    int arr1[n] = {0};
    int flag = 0;
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(arr[i]+arr[j]==18 && arr[i]>arr[j]){
            int pro = arr[i]*arr[j];
            if(pro>maxi){
                maxi = pro;
                arr1[0] = arr[i];
                arr1[1] = arr[j];
                flag = 1;
            }
        }
    }
    }
    if(flag==1){
        for(int i=0 ; i<2 ; i++){
            cout<<arr1[i]<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    result(arr, n);
}