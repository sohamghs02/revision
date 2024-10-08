#include <bits/stdc++.h>
using namespace std;

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2){
    string s1 = "";
    string s2 = "";
    for(string s : word1){
        s1 = s1 + s;
    }
    for(string s : word2){
        s2 = s2 + s;
    }
    return s1 == s2;
}

int main(){
  vector<string> w1 = {"a", "bc"};
  vector<string> w2 = {"ab", "c"};
  cout<<(arrayStringsAreEqual(w1, w2) ? "true" : "false");
  return 0;
}