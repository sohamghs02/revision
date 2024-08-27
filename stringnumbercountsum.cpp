#include<bits/stdc++.h>
using namespace std;

int main(){
    int sum=0;
    string str;
    getline(cin,str);    
    for(int i = 0; str[i] != '\0'; i++){             
        if(str[i]>='0' && str[i]<='9'){
            sum=sum+(str[i]-'0');
        }
    }
    cout<<sum;
    return 0;
}