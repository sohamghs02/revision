#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    int c = 0;
    for(int i=0 ; str[i]!='\0' ; i++){
        if(!(tolower(str[i])=='a' || tolower(str[i])=='e' || tolower(str[i])=='i' || tolower(str[i])=='o' || tolower(str[i])=='u')){
            c++;
        }
    }
    int f = 1;
    for(int i=1 ; i<=c ; i++){
        f=f*i;
    }
    cout<<f;
}