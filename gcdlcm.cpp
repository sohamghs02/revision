#include<iostream>
using namespace std;

int main(){
    int a,b,num,den,gcd,lcm,rem;
    cin>>a>>b;
    num=(a>b)?a:b;
    den=(a<b)?a:b;
    rem=num%den;
    while(rem!=0){
        num=den;
        den=rem;
        rem=num%den;
    }
    gcd=den;
    lcm=(a*b)/gcd;
    cout<<gcd<<" "<<lcm<<endl;
    return 0;
}