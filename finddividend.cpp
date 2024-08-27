#include<bits/stdc++.h>
using namespace std;

int main(){
    int divisor,quotient,remainder;
    cin>>divisor>>quotient>>remainder;
    int dividend = divisor*quotient + remainder;
    cout<<dividend;
    return 0;
}