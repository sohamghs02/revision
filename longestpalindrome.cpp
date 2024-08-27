#include<bits/stdc++.h>
using namespace std;

int check(int n){
     int rev=0, o = n;
     while(o>0){
          int rem = o%10;
          rev = rev*10 + rem;
          o/= 10;
     }
    if(n==rev)
        return 1;
    return 0;
} 

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res = INT_MIN;
    for(int i=0; i<n; i++){
        if(check(arr[i]) && arr[i]>res)
            res = arr[i];
    }
    if(res==INT_MIN)
       res = -1;
    cout<<res;
}