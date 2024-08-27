#include<iostream>
using namespace std;

void fibo(int n){
    int a = 0, b = 1;
    if(n==1){
        cout<< a;
    }
    else if(n==2){
        cout<<a<<" "<<b;
    }
    else{
        cout<<a<<" "<<b<<" ";
        for(int i=3 ; i<=n ; i++){
            int c = a+b;
            cout<<c<<" ";
            a = b;
            b = c;
        }
    }
}

int main(){
    int n;
    cin>>n;
    fibo(n);
    return 0;
}