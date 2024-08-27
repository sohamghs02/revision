#include<bits/stdc++.h>
using namespace std;

int isPrime(int n){
    if(n < 2)
        return 0;
    for(int i=2; i<sqrt(n); i++) 
    { 
        if(n % i == 0) 
            return 0;
    }
    return 1;
}

void isGoogly(int n){
    int rem=0,sum=0;
    while(n!=0){
        rem=n%10;
        sum=sum+rem;        
        n=n/10;
    }
    if(isPrime(sum)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}

int main(){
    int n;
    cin>>n;
    isGoogly(n);
    return 0;
}