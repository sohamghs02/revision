#include<iostream>
using namespace std;

int main(){
    int n,f=1;
    cin>>n;
    if(n<0){
        cout<<"error"<<endl;
    }
    else{
        for(int i=1; i<=n; i++){
            f=f*i;
        }
        cout<<f<<endl;
    }
    return 0;
}