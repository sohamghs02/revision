#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c=0,rem=0,sum=0,x,y;
    cin>>n;
    x=n;    
    while(x!=0){
        x=x/10;
        c++;
    }
    y=n;
    while(y!=0){
        rem=y%10;
        sum=sum+(round(pow(rem,c)));
        y=y/10;
    }
    if(sum==n){
        cout<<"armstrong";
    }
    else{
        cout<<"not";
    }
    return 0;
}