#include<bits/stdc++.h>
using namespace std;

string repeat(string str, int n){
    string ans="";
    for(int i=1;i<=n;i++){
        ans=ans+str;
    }
    return ans;
}

int main(){    
    string str;
    getline(cin,str);
    int n;
    cin>>n;
    cout<<repeat(str,n)<<endl;
    return 0;
}