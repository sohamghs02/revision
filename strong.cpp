#include<iostream>
using namespace std;

int main(){
    int n,f,s=0,rem=0,o;
    cin>>n; 
    o=n;   
    while(n>0){
        rem=n%10;
        f=1;
        for(int i=1;i<=rem;i++){
            f=f*i;
        }
        s=s+f;
        n=n/10;
    }
    if(s==o){
        cout<<"strong";
    }
    else{
        cout<<"not";
    }
    return 0;
}