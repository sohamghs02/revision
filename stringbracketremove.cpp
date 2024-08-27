#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);    
    for(int i = 0; str[i] != '\0'; i++){             
        if(str[i]=='(' || str[i]==')'){
            str[i]='\0';
        }
    }
    cout<<str;
    return 0;
}