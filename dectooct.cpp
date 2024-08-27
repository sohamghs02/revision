#include<bits/stdc++.h>
using namespace std;
int convert(int n){
    if(n>=0 && n<=8){
        return n;
    }
    else{
        return (n%8+10*convert(n/8));
    }
}
int main(){
    int n;
    cin>>n;
    cout<<convert(n);
}