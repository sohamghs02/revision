#include<iostream>
using namespace std;

int prime(int n){
    int isPrime=1;    
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            isPrime=0;
            break;
        }
    }
    return isPrime;
}
int main(){
    int n,flag=0;
    cin>>n;
    for(int i=2; i<=n/2; i++){
        if(prime(i)==1){
            if(prime(n-i)==1){
                cout<<n<<" = "<<i<<" + "<<n-i<<endl;
                flag=1;
            }
        }
    }
    if(flag==0){
        cout<<"cannot be represented";
    }
    return 0;
}