#include<bits/stdc++.h>
using namespace std;

int isPrime(int n){
    if(n<=1) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(){
    int n,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(isPrime(arr[i])){
            sum=sum+ pow(arr[i], 2);
        }
    }
    cout<<sum;
}