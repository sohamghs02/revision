#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;    
    int count = 0;    
    for(int i=1;i<=n;i++){
        if(i%1==0 && i%2==0 && i%4==0 && i%8==0 && i%10!=0){
            count++;
        }
    }
    cout<<count;
    return 0;
}