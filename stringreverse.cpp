#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    int n = str.length();
    for(int i=0,j=n-1 ; i<j ; i++,j--){
        swap(str[i], str[j]);
    }
    cout<<str;
}