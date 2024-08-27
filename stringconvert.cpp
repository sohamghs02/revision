#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str); 
    int count1=0, count2=0;   
    for(int i = 0; str[i] != '\0'; i++){             
        if(str[i]>='a' && str[i]<='z'){
            count1++;
        }
        else if(str[i]>='A' && str[i]<='Z'){
            count2++;
        }
    }
    if(count1>count2){
        for(int i = 0; str[i] != '\0'; i++){
            str[i] = tolower(str[i]);
        }
        cout<<str;
    }
    else{
        for(int i = 0; str[i] != '\0'; i++){
            str[i] = toupper(str[i]);
        }
        cout<<str;
    }
    return 0;
}