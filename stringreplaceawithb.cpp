#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    for(int i = 0; str[i] != '\0'; i++){        
        if(str[i]=='a'){
            str[i]='b';
        }
        else if(str[i]=='b'){
            str[i]='a';
        }
    }
    cout<<str;
    return 0;
}