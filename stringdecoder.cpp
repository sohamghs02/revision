#include<bits/stdc++.h>
using namespace std;
string helper(string& str){
    string s = "";
    int c = 0;
    for(int i=0 ; str[i]!='\0' ; i++){
        if(str[i]=='1'){
            c++;
        }
        else{
            if(c>0){
                s +='A'+(c-1);
                c = 0;
            }
        }
    }
    if(c>0){
        s+='A'+(c-1);
    }
    return s;
}
int main(){
    string str;
    getline(cin, str);
    cout<<helper(str);
}