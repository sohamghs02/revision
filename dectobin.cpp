#include<bits/stdc++.h>
using namespace std;
int convert(int n){
    if(n==0 || n==1){
        return n;
    }
    else{
        return (n%2+10*convert(n/2));
    }
}
int main(){
    int n;
    cin>>n;
    cout<<convert(n);
}