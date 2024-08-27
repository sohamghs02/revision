#include<iostream>
using namespace std;

int main(){
    int n,sum=0,rem,o;
    cin>>n;
    o=n;
    while(o!=0){
        rem=o%10;
        sum=sum+rem;
        o=o/10;
    }
    if(n%sum==0){
        cout<<"harshad";
    }
    else{
        cout<<"not";
    }
    return 0;
}