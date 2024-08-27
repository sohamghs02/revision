#include<iostream>
using namespace std;

int main(){
    int n,rem,sum=0;
    cin>>n;
    for(int i=1; i<=(n-1); i++){
        rem=n%i;
        if(rem==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        cout<<"perfect";
    }
    else{
        cout<<"not";
    }
    return 0;
}