#include<bits/stdc++.h>
using namespace std;

vector<int> duplicate(int arr[], int size){
    vector<int> unique;
    for(int i=0; i<size; i++){
        bool isduplicate = false;
        for(int j=0;j<unique.size(); j++){
            if(arr[i] == unique[j]){
                isduplicate = true;
                break;
            }
        }
        if(!isduplicate){
            unique.push_back(arr[i]);
        }
    }
    return unique;
}

int main(){
    int n;    
    cin>>n;
    int arr[n];    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> i = duplicate(arr, n);
    for(int j=0;j<i.size();j++){
        cout << i[j] << " ";
    }
    return 0;
}