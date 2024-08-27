#include <bits/stdc++.h>
using namespace std;

int main(){
    char s[100],w[20];    
    cin.getline(s, 100);    
    cin.getline(w, 20);
    
    int slen = strlen(s);
    int wlen = strlen(w);
    bool found = false;    
    for (int i=0; i<=slen-wlen; i++) {
        int j;
        for (j=0; j<wlen; j++) {
            if(s[i+j] != w[j]) {
                break;
            }
        }
        if (j == wlen) {
            found = true;
            break;
        }
    }    
    cout<<(found ? 1 : 0)<< endl;    
    return 0;
}
