#include<bits/stdc++.h>
using namespace std;

int isPrime(int n){
    if(n==0 || n==1){
        return 0;
    }
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int SumprimeIdx(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        if(isPrime(i)==1){
            sum=sum+arr[i];
        }
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<SumprimeIdx(arr,n)<<endl;
    return 0;
}