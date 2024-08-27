#include<bits/stdc++.h>
using namespace std;

int main(){
    int count = 0;
    string str;
    getline(cin,str);    
    for(int i = 0; str[i] != '\0'; i++){   
        str[i] = toupper(str[i]);     
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            count++;
        }
    }
    cout<<count;
    return 0;
}