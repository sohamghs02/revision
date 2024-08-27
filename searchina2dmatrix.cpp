#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int target;
    cin>>target;
    int flag=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==target){
                flag=1;
                break;
            }
        }
    }
    if(flag==0){
        cout<<"not";
    }
    else{
        cout<<"present";
    }    
    return 0;        
}