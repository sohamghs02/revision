#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    istringstream iss(str);
    vector<string> words;
    string word;
    while(iss >> word){
        words.push_back(word);
    }
    for(int i = words.size() - 1; i >= 0; i--){
        cout << words[i] << " ";
    }
    return 0;
}