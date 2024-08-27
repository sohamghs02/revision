#include<bits/stdc++.h>
using namespace std;

string ReplaceCharacter(char* str1, char ch1, char ch2){
    string res="";
    for(int i=0;i<strlen(str1);i++){
        if(str1[i]==ch1){
            res=res+ch2;
        }
        else if(str1[i]==ch2){
            res=res+ch1;
        }
        else{
            res=res+str1[i];
        }
    }
    return res;
}

int main(){
    char str[100];
    cin>>str;
    char ch1,ch2;
    cin>>ch1>>ch2;
    cout<<ReplaceCharacter(str,ch1,ch2)<<endl;
    return 0;
}