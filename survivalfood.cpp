#include<bits/stdc++.h>
using namespace std;

void survive(int s, int n, int m){
    if(n<m){
        cout<<"No";
    }
    else{
        cout<<"Yes";
        cout<<(n/(s-m))<<endl;
    }
}

int main(){
    int s,n,m;
    cin>>s>>n>>m;
    survive(s,n,m);
    return 0;
}