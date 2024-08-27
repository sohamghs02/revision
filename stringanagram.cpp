#include<bits/stdc++.h>
using namespace std;

int main(){
    char str1[100],str2[100];
    int f[26]={0}, s[26]={0}, c=0, flag=0;
    cout<<"Enter first string: ";
    cin.getline(str1,100);
    cout<<"Enter second string: ";
    cin.getline(str2,100);
    while(str1[c] != '\0'){
        f[str1[c]-'a']++;
        c++;
    }
    c=0;
    while(str2[c] != '\0'){
        s[str2[c]-'a']++;
        c++;
    }
    for(int i=0;i<26;i++){
        if(f[i] != s[i])
            flag=1;
    }
    if(flag == 0){
        printf("Anagram.");
    }
    else{
        printf("Not Anagram.");
    }
    return 0;
}