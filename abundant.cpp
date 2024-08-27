#include<iostream>
using namespace std;

int main(){
    int n,sum=0,o;
    cin>>n;
    o=n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum>o){
        cout<<"abundant";
    }
    else{
        cout<<"not";
    }
    return 0;
}