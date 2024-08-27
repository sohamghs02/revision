#include<bits/stdc++.h>
using namespace std;

int main(){
    int e,f;
    cin>>e>>f;
    int ans=0;
    ans=(e+f)/4;

    if(ans<=min(e,f)){
        cout<<ans;
    }
    if(ans>min(e,f)){
        cout<<min(e,f);
    }
    return 0;
}