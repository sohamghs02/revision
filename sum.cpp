#include<iostream>
using namespace std;

void check(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum = sum+arr[i];
    }
    cout<<sum<<endl;
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