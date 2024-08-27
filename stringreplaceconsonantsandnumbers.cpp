#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    for(int i = 0; str[i] != '\0'; i++){        
        if(str[i]>='0' && str[i]<='9'){
            str[i]='_';
        }
        else if(((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z')) &&
         !(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
          str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')){
            str[i]='.';
        }
    }
    cout<<str;
    return 0;
}