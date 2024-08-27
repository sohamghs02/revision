#include<iostream>
using namespace std;

int main(){
    int n,o,rem=0,rev=0;
    cin>>n;
    o=n;
    while(n!=0){
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    if(rev==o){
        cout<<"palindrome";
    }
    else{
        cout<<"not";
    }
    return 0;
}