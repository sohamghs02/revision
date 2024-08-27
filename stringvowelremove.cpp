#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);    
    for(int i = 0; str[i] != '\0'; i++){   
        //str[i] = toupper(str[i]);     
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            str[i]='\0';
        }
    }
    cout<<str;
    return 0;
}