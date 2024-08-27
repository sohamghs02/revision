#include<bits/stdc++.h>
using namespace std;
int binary(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return n%2+10*(binary(n/2));
    }
}
int magic(int n){
    int m = binary(n);
    int sum = 0;
    int c = 0;
    while(m!=0){
        int rem = m%10;
        if(rem==0){
            rem = rem+1;
        }
        else if(rem==1){
            rem = rem+1;
        }
        sum = sum+rem;
        m = m/10;
    }
    if(sum%2!=0){
        c++;
    }
    return c;
}
int main(){
    int n;
    cin>>n;
    int c = 0;
    for(int i=1 ; i<=n ; i++){
        if(magic(i)!=0){
            c++;
        }
    }
    cout<<c;
}