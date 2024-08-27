#include<bits/stdc++.h>
using namespace std;

int isSubset(int arr1[], int arr2[], int m, int n){
    int j,i;
    for (i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            if (arr2[i] == arr1[j])
                break;
        } 
        if (j == m)
           return 0;
    } 
    return 1;
}

int main(){
    int n,m;
    cin>>n;    
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cin>>m;    
    int arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    } 
    if(isSubset(arr1, arr2, n, m))
        cout<<"subset";
    else
        cout<<"not a subset";
    return 0;
}