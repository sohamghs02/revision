#include<bits/stdc++.h>
using namespace std;

string nstrings(string s, int n){
    string ans="";
    for(int i=0;i<n;i++){
        ans=ans+s;
    }
    return ans;
}

int main(){
    string s;
    getline(cin,s);
    int n;
    cin>>n;
    string ans = nstrings(s,n);
    cout<<ans;
    return 0;
}