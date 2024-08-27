#include<bits/stdc++.h>
using namespace std;

int climbstair(int n, int m){
    int ans = ((n/m)+(n%m));
    return ans;
}

int main(){
    int n,m;
    cin>>n>>m;
    cout<<climbstair(n,m)<<endl;
    return 0;
}