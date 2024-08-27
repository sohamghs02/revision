#include<bits/stdc++.h>
using namespace std;

/*int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<string> res;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            res.push_back("even");
        }
        else{
            res.push_back("odd");
        }
    }
    for(auto s : res){
        cout<<s<<" ";
    }
    return 0;
}*/

int main(){
    int n;
    cin>>n;
    int arr[n];
    string res[n];    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            res[i]="even";
        }
        else{
            res[i]="odd";
        }
    }
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    return 0;
}