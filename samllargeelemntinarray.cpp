#include<iostream>
using namespace std;

void check(int arr[], int n){
    int s,l;
    s = l = arr[0];
    for(int i = 1; i < n ;i++){
        if(arr[i] < s)
            s = arr[i];
        if(arr[i] > l)
            l = arr[i];
    }
    cout<<s<<" "<<l<<endl;
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