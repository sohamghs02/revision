#include <bits/stdc++.h>
using namespace std;

int dec(int num)
{
    if(num==0) return 0;
    return ((num%10)+2*dec(num/10));
}
int main()
{
    int bin;
    cin>>bin;
    cout<<dec(bin);
    return 0;
}