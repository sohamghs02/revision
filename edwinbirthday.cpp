#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0,sum=0;
    sum = (n*(n+1))/2;
    ans = sum+1;

    cout<<ans%1000000007<<endl;
    return 0;
}