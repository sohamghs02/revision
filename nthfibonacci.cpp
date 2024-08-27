#include<iostream>
using namespace std;

int fibo(int n){
    if(n==0 || n==1){
        return n;
    }
    int a=0,b=1,c;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}

int main(){
    int n;
    cin>>n;
    cout<<fibo(n);
    return 0;
}