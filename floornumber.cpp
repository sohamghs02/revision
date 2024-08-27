#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>=0 && n<=9){
        cout<<n;
    }
    else if(n%2==0){
        cout<<floor((n-2)/2);
    }
    else if(n%2!=0){
        cout<<floor(n/2);
    }
    return 0;
}