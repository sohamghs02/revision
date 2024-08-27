#include<bits/stdc++.h>
using namespace std;
int binary(int n){
    if(n==0 || n==1){
        return n;
    }
    else{
        return n%2+10*binary(n/2);
    }
}
int arrange(int n){
    int m = binary(n);
    int c = 0;
    while(m!=0){
        int rem=m%10;
        if(rem==1){
            c++;
        }
        m = m/10;
    }
    int min = 0;
    int power = 1;
    for(int i=1 ; i<=c ; i++){
        min = min+power;
        power = power*2;
    }
    return min;
}
int main(){
    int n;
    cin>>n;
    cout<<arrange(n);
}