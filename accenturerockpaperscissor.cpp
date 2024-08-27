#include<bits/stdc++.h>
using namespace std;

int main(){
    string m;
    getline(cin, m);

    if(m=="rock"){
        cout<<"paper";
    }
    else if(m=="scissors"){
        cout<<"rock";
    }
    else{
        cout<<"scissors";
    }
    return 0;
}