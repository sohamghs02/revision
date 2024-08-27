#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        maxi=max(maxi,sum);
        if(sum<0){
            sum=0;
        }
    }
    cout<<maxi<<endl;
    return 0;
}