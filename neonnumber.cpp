#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0,rem=0;
    int sq=pow(n,2);
    while(sq!=0){
        rem=sq%10;
        sum=sum+rem;
        sq=sq/10;
    }
    if(sum==n){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}