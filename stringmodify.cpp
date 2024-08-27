#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1;
    string str2;
    getline(cin, str1);
    getline(cin, str2);
    for(int i=0 ; str1[i]!='\0' ; i++){
        for(int j=0 ; str2[j]!='\0' ; j++){
            if(str1[i]==str2[j]){
                str1[i] = '\0';
            }
        }
    }
    cout<<str1;
}