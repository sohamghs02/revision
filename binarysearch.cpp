#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int target){
    int start=0, end=n-1;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
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
    int target;
    cin>>target;
    int result = binarySearch(arr, n, target);
    cout<<result<<endl;
    return 0;
}