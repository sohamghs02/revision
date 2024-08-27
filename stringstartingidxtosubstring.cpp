#include <bits/stdc++.h>
using namespace std;

int findSubstring(char str[], char substr[]) {
    int len = strlen(str);
    int sublen = strlen(substr);
    for (int i=0; i<=len-sublen; i++){
        int j;
        for (j=0; j<sublen; j++) {
            if (str[i+j]!=substr[j]) {
                break;
            }
        }
        if (j==sublen){
            return i;
        }
    }
    return -1;
}

int main() {
    char str[100], sub[100];    
    cin.getline(str, 100);    
    cin.getline(sub, 100);

    int index = findSubstring(str, sub);
    cout<<index;
    return 0;
}
