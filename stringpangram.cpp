#include <bits/stdc++.h>
using namespace std;

bool checkPangram(string str){
    bool a[26]={false};
    for (int i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z')
            a[str[i]-'a'] = true;
        else if(str[i]>='A' && str[i]<='Z')
            a[str[i]-'A'] = true;
    }
    for (int i=0;i<26;i++){
        if (a[i] == false)
            return false;
    }
    return true;
}

int main(){
    string str;    
    getline(cin, str);
    if (checkPangram(str))
        cout << " is a Pangram.";
    else
        cout <<" is not a Pangram.";
    return 0;
}