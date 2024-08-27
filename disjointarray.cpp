#include<bits/stdc++.h>
using namespace std;

int disjoint(int arr1[], int arr2[], int n, int m){    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr1[i]==arr2[j]){
                return 0;   
            }
        }
    }
    return 1;
}

int main(){
    int n,m;
    cin>>n;    
    int arr1[n];
    for(int i=1;i<n;i++){
        cin>>arr1[i];
    }
    cin>>m;    
    int arr2[m];
    for(int i=1;i<m;i++){
        cin>>arr2[i];
    }    
    if(disjoint(arr1, arr2, n, m))
        cout<<"Yes";    
    else
        cout<<"No";
    return 0;    
}