#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    int k;
    cin>>k;
    for(char ch : str){
        if(ch==' '){
            k--;
            if(k==0) break;
        }
        cout<<ch;
    }
    return 0;
}