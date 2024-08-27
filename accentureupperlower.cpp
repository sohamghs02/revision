#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    int u=0, l=0;
    for(int i=0;i<str.length();i++){
        if(str[i]>='A' && str[i]<='Z'){
            u++;
        }
        if(str[i]>='a' && str[i]<='z'){
            l++;
        }
    }
    if(l>u){
        for(int i=0;i<str.length();i++){
            if(str[i]>='A' && str[i]<='Z'){
                str[i]=tolower(str[i]);
            }
        }
    }
    if(u>l){
        for(int i=0;i<str.length();i++){
            if(str[i]>='a' && str[i]<='z'){
                str[i]=toupper(str[i]);
            }
        }
    }
    cout<<str<<endl;
    return 0;
}